import chisel3._
import chisel3.util._

class PS2Keyboard extends Module {
  val io = IO(new Bundle {
    val ps2_clk = Input(Bool())
    val ps2_data = Input(Bool())
    val nextdata_n = Input(Bool())
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

  // Falling edge detection for ps2_clk
  ps2_clk_sync := ps2_clk_sync.tail :+ io.ps2_clk
  val sampling = ps2_clk_sync(2) && !ps2_clk_sync(1)

  // Register ready and overflow
  val ready = RegInit(false.B)
  val overflow = RegInit(false.B)

  when (ready) {
    when (!io.nextdata_n) {
      r_ptr := r_ptr + 1.U
      when (w_ptr === (r_ptr + 1.U)) {
        ready := false.B
      }
    }
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

  // State machine
  val idle :: break :: make :: Nil = Enum(3)
  val state = RegInit(idle)
  val lastKeyCode = RegInit(0.U(8.W))
  val keyCount = RegInit(0.U(8.W))
  val newKeyPress = RegInit(false.B)
  val nextdata_n = RegInit(true.B) // 初始为高电平

  switch(state) {
    is(idle) {
      when(ready) {
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
      when(ready) {
        state := idle
        when(newKeyPress) {
          keyCount := keyCount + 1.U
          newKeyPress := false.B
        }
      }
    }
    is(make) {
      when(ready) {
        state := idle
      }
    }
  }

  // Scancode to ASCII conversion
  val scancodeToAscii = VecInit(Seq.fill(256)(0.U(8.W)))

  // Fill in the relevant scancode to ASCII mappings from the image
  scancodeToAscii(0x1D) := 0x57.U // W key (ASCII 'W')
  scancodeToAscii(0x15) := 0x51.U // Q key (ASCII 'Q')
  scancodeToAscii(0x24) := 0x45.U // E key (ASCII 'E')
  scancodeToAscii(0x2D) := 0x52.U // R key (ASCII 'R')
  scancodeToAscii(0x2C) := 0x54.U // T key (ASCII 'T')
  scancodeToAscii(0x35) := 0x59.U // Y key (ASCII 'Y')
  scancodeToAscii(0x3C) := 0x55.U // U key (ASCII 'U')
  scancodeToAscii(0x43) := 0x49.U // I key (ASCII 'I')
  scancodeToAscii(0x44) := 0x4F.U // O key (ASCII 'O')
  scancodeToAscii(0x4D) := 0x50.U // P key (ASCII 'P')
  scancodeToAscii(0x1C) := 0x41.U // A key (ASCII 'A')
  scancodeToAscii(0x1B) := 0x53.U // S key (ASCII 'S')
  scancodeToAscii(0x23) := 0x44.U // D key (ASCII 'D')
  scancodeToAscii(0x2B) := 0x46.U // F key (ASCII 'F')
  scancodeToAscii(0x34) := 0x47.U // G key (ASCII 'G')
  scancodeToAscii(0x33) := 0x48.U // H key (ASCII 'H')
  scancodeToAscii(0x3B) := 0x4A.U // J key (ASCII 'J')
  scancodeToAscii(0x42) := 0x4B.U // K key (ASCII 'K')
  scancodeToAscii(0x4B) := 0x4C.U // L key (ASCII 'L')
  scancodeToAscii(0x1A) := 0x5A.U // Z key (ASCII 'Z')
  scancodeToAscii(0x22) := 0x58.U // X key (ASCII 'X')
  scancodeToAscii(0x21) := 0x43.U // C key (ASCII 'C')
  scancodeToAscii(0x2A) := 0x56.U // V key (ASCII 'V')
  scancodeToAscii(0x32) := 0x42.U // B key (ASCII 'B')
  scancodeToAscii(0x31) := 0x4E.U // N key (ASCII 'N')
  scancodeToAscii(0x3A) := 0x4D.U // M key (ASCII 'M')
  scancodeToAscii(0x45) := 0x30.U // 0 key (ASCII '0')
  scancodeToAscii(0x16) := 0x31.U // 1 key (ASCII '1')
  scancodeToAscii(0x1E) := 0x32.U // 2 key (ASCII '2')
  scancodeToAscii(0x26) := 0x33.U // 3 key (ASCII '3')
  scancodeToAscii(0x25) := 0x34.U // 4 key (ASCII '4')
  scancodeToAscii(0x2E) := 0x35.U // 5 key (ASCII '5')
  scancodeToAscii(0x36) := 0x36.U // 6 key (ASCII '6')
  scancodeToAscii(0x3D) := 0x37.U // 7 key (ASCII '7')
  scancodeToAscii(0x3E) := 0x38.U // 8 key (ASCII '8')
  scancodeToAscii(0x46) := 0x39.U // 9 key (ASCII '9')
  scancodeToAscii(0x29) := 0x20.U // SPACE key (ASCII ' ')

  // Display ASCII and count
  val asciiCode = scancodeToAscii(lastKeyCode)

  // Seven-segment display logic
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
    "b01110001".U(8.W) // f
  ))


  val low_key_count = (keyCount / 10.U) % 10.U


  // Display key count on 7-segment display
  io.seg := VecInit(

    seg_map(keycode(3, 0)),
    seg_map(keycode(7, 4)), 
    seg_map(asciiCode(3, 0)),
    seg_map(asciiCode(7, 4)),
    seg_map(keyCount),
    "b00000000".U,
    "b00000000".U,
    "b00000000".U
  )

  // 将 nextdata_n 信号传递给 PS2Keyboard 模块
  ps2Keyboard.io.nextdata_n := nextdata_n
}

object keyboard extends App {
  chisel3.Driver.execute(args, () => new keyboard)
}