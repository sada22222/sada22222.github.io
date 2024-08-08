import chisel3._
import chisel3.util._

class PS2Keyboard extends Module {
  val io = IO(new Bundle {
    val ps2_clk = Input(Bool())
    val ps2_data = Input(Bool())
    val nextdata_n = Input(Bool())
    val fifo_clean = Input(Bool())    
    val data = Output(UInt(8.W))
    val ready = Output(Bool())
    val overflow = Output(Bool())
  })

  // Internal signals
  val buffer = RegInit(0.U(10.W))
  val fifo = RegInit(VecInit(Seq.fill(8)(0.U(8.W))))
  val w_ptr = RegInit(0.U(3.W))
  val r_ptr = RegInit(0.U(3.W))
  val count = RegInit(0.U(4.W))
  val ps2_clk_sync = RegInit(VecInit(Seq.fill(3)(false.B)))


  ps2_clk_sync := ps2_clk_sync.tail :+ io.ps2_clk
  val sampling = ps2_clk_sync(2) && !ps2_clk_sync(1)

  
  val ready = RegInit(false.B)
  val overflow = RegInit(false.B)
  when(io.fifo_clean) {
    fifo.foreach(_ := 0.U)
    w_ptr := 0.U
    r_ptr := 0.U
    count := 0.U
    buffer := 0.U
  }

  when (sampling) {
    when (count === 10.U) {
      when (buffer(0) === 0.U && io.ps2_data && buffer(9, 1).xorR) {
        fifo(w_ptr) := buffer(8, 1)
        w_ptr := w_ptr + 1.U
        ready := true.B
        overflow := overflow || (r_ptr === (w_ptr + 1.U))
      }
      buffer := 0.U 
      count := 0.U
    } .otherwise {
      buffer := buffer.bitSet(count, io.ps2_data)
      count := count + 1.U
    }
  }

  when (ready && !io.nextdata_n) {
    r_ptr := r_ptr + 1.U
    when (w_ptr === (r_ptr + 1.U)) {
      ready := false.B
    }
  }

  io.data := fifo(r_ptr)
  io.ready := ready
  io.overflow := overflow
}

class keyboard extends Module {
  val io = IO(new Bundle {
    val ps2_clk = Input(Bool())
    val ps2_data = Input(Bool())
    val seg = Output(Vec(8, UInt(8.W)))
  })

  val ps2Keyboard = Module(new PS2Keyboard)

  ps2Keyboard.io.ps2_clk := io.ps2_clk
  ps2Keyboard.io.ps2_data := io.ps2_data

  val keycode = ps2Keyboard.io.data
  val ready = ps2Keyboard.io.ready
  val overflow = ps2Keyboard.io.overflow


  val idle :: break :: make :: Nil = Enum(3)
  val state = RegInit(idle)
  val lastKeyCode = RegInit(0.U(8.W))
  val keyCount = RegInit(0.U(8.W))
  val newKeyPress = RegInit(false.B)
  val nextdata_n = RegInit(true.B)
  val fifo_clean = RegInit(false.B)

  switch(state) {
    is(idle) {
      fifo_clean := false.B
      when(ready) {
        nextdata_n := false.B
        when(keycode === 0xF0.U) {
          state := break
        } .otherwise {
          lastKeyCode := keycode
          newKeyPress := true.B
          state := make
        }
      }
    }
    is(break) {
      nextdata_n := true.B
      newKeyPress := false.B
      keyCount := keyCount + 1.U
      fifo_clean := true.B
      state := idle
    }
    is(make) {
      nextdata_n := true.B
      newKeyPress := true.B
      when(ready) {
        state := idle
      }
    }
  }


  val scancodeToAscii = VecInit(Seq.fill(256)(0.U(8.W)))

  scancodeToAscii(0x1D) := 0x57.U // W  
  scancodeToAscii(0x15) := 0x51.U // Q  
  scancodeToAscii(0x24) := 0x45.U // E  
  scancodeToAscii(0x2D) := 0x52.U // R  
  scancodeToAscii(0x2C) := 0x54.U // T  
  scancodeToAscii(0x35) := 0x59.U // Y  
  scancodeToAscii(0x3C) := 0x55.U // U  
  scancodeToAscii(0x43) := 0x49.U // I  
  scancodeToAscii(0x44) := 0x4F.U // O  
  scancodeToAscii(0x4D) := 0x50.U // P  
  scancodeToAscii(0x1C) := 0x41.U // A  
  scancodeToAscii(0x1B) := 0x53.U // S  
  scancodeToAscii(0x23) := 0x44.U // D  
  scancodeToAscii(0x2B) := 0x46.U // F  
  scancodeToAscii(0x34) := 0x47.U // G  
  scancodeToAscii(0x33) := 0x48.U // H  
  scancodeToAscii(0x3B) := 0x4A.U // J  
  scancodeToAscii(0x42) := 0x4B.U // K  
  scancodeToAscii(0x4B) := 0x4C.U // L  
  scancodeToAscii(0x1A) := 0x5A.U // Z  
  scancodeToAscii(0x22) := 0x58.U // X  
  scancodeToAscii(0x21) := 0x43.U // C 
  scancodeToAscii(0x2A) := 0x56.U // V  
  scancodeToAscii(0x32) := 0x42.U // B 
  scancodeToAscii(0x31) := 0x4E.U // N 
  scancodeToAscii(0x3A) := 0x4D.U // M 
  scancodeToAscii(0x45) := 0x30.U // 0
  scancodeToAscii(0x16) := 0x31.U // 1
  scancodeToAscii(0x1E) := 0x32.U // 2 
  scancodeToAscii(0x26) := 0x33.U // 3 
  scancodeToAscii(0x25) := 0x34.U // 4 
  scancodeToAscii(0x2E) := 0x35.U // 5  
  scancodeToAscii(0x36) := 0x36.U // 6  
  scancodeToAscii(0x3D) := 0x37.U // 7  
  scancodeToAscii(0x3E) := 0x38.U // 8  
  scancodeToAscii(0x46) := 0x39.U // 9  
  scancodeToAscii(0x29) := 0x20.U // SPACE key 

  val asciiCode = scancodeToAscii(lastKeyCode)

  val seg_map = VecInit(Seq(
    "b00000011".U(8.W), // 0
    "b10011111".U(8.W), // 1
    "b00100101".U(8.W), // 2
    "b00001101".U(8.W), // 3
    "b10011001".U(8.W), // 4
    "b01001001".U(8.W), // 5
    "b01000001".U(8.W), // 6
    "b00011111".U(8.W), // 7
    "b00000001".U(8.W), // 8
    "b00001001".U(8.W),  // 9
    "b00010001".U(8.W),  // a
    "b11000001".U(8.W),  // b  
    "b01100011".U(8.W),  // c
    "b10000101".U(8.W),  // d
    "b01100001".U(8.W),  // e
    "b01110001".U(8.W)   // f
  ))

  io.seg := VecInit(
    seg_map(Mux(newKeyPress, lastKeyCode(3, 0), 0.U)),
    seg_map(Mux(newKeyPress, lastKeyCode(7, 4), 0.U)), 
    seg_map(Mux(newKeyPress, asciiCode(3, 0), 0.U)),
    seg_map(Mux(newKeyPress, asciiCode(7, 4), 0.U)),
    seg_map(keyCount % 10.U),
    seg_map((keyCount / 10.U) % 10.U),
    "b00000000".U,
    "b00000000".U
  )

  ps2Keyboard.io.nextdata_n := nextdata_n
  ps2Keyboard.io.fifo_clean := fifo_clean
}

object keyboard extends App {
  chisel3.Driver.execute(args, () => new keyboard)
}
