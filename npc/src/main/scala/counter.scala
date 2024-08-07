import chisel3._
import chisel3.util._


class Timer extends Module {
  val io = IO(new Bundle {
    val start = Input(Bool())
    val pause = Input(Bool())
    val reset = Input(Bool())
    val digit1 = Output(UInt(4.W))
    val digit2 = Output(UInt(4.W))
    val led = Output(Bool())
  })
  val maxCount_Hz = (50000000/4 - 1).U
  val count = RegInit(0.U(26.W))
  when(count === maxCount_Hz) {
    count := 0.U
  }.otherwise {
    count := count + 1.U
  }

  val clk_1Hz = (count === maxCount_Hz)

  val counter = RegInit(0.U(7.W))
  val run = RegInit(false.B)
  val maxCount = 99.U

  when(io.reset) {
    counter := 0.U
    run := false.B
  }.elsewhen(io.start ) {
    run := true.B
  }.elsewhen(io.pause ) {
    run := false.B
  }

  when(run && clk_1Hz) {
    when(counter === maxCount) {
      counter := 0.U
    }.otherwise {
      counter := counter + 1.U
    }
  }

  io.digit1 := counter % 10.U
  io.digit2 := (counter / 10.U) % 10.U
  io.led := (counter === maxCount)
}

class SevenSegmentDecoder extends Module {
  val io = IO(new Bundle {
    val digit = Input(UInt(4.W))
    val segments = Output(UInt(8.W))
  })

io.segments := MuxLookup(io.digit, "b11111111".U, Seq(
    0.U -> "b00000011".U, // 0
    1.U -> "b10011111".U, // 1
    2.U -> "b00100101".U, // 2
    3.U -> "b00001101".U, // 3
    4.U -> "b10011001".U, // 4
    5.U -> "b01001001".U, // 5
    6.U -> "b01000001".U, // 6
    7.U -> "b00011111".U, // 7
    8.U -> "b00000001".U, // 8
    9.U -> "b00001001".U  // 9
))

}

class counter extends Module {
  val io = IO(new Bundle {
    val start = Input(Bool())
    val pause = Input(Bool())
    val reset = Input(Bool())
    val segA = Output(UInt(8.W))
    val segB = Output(UInt(8.W))
    val led = Output(Bool())
  })

  val timer = Module(new Timer)
  val decoderA = Module(new SevenSegmentDecoder)
  val decoderB = Module(new SevenSegmentDecoder)

  timer.io.start := io.start
  timer.io.pause := io.pause
  timer.io.reset := io.reset

  decoderA.io.digit := timer.io.digit1
  decoderB.io.digit := timer.io.digit2

  io.segA := decoderA.io.segments
  io.segB := decoderB.io.segments
  io.led := timer.io.led
}

object counter extends App {
  Driver.execute(args, () => new counter)
}
