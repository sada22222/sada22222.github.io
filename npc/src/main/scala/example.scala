import chisel3._

class Top extends Module {
  val io = IO(new Bundle {
    val a = Input(Bool())
    val b = Input(Bool())
    val f = Output(Bool())
  })

  // Logic implementation
  io.f := io.a ^ io.b
}

object Top extends App {
  Driver.execute(args, () => new Top)
}
