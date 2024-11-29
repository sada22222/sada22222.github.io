file://<WORKSPACE>/npc/src/main/scala/core/MidStage.scala
### scala.MatchError: TypeDef(T,TypeBoundsTree(EmptyTree,Ident(StageIO),EmptyTree)) (of class dotty.tools.dotc.ast.Trees$TypeDef)

occurred in the presentation compiler.

presentation compiler configuration:


action parameters:
offset: 510
uri: file://<WORKSPACE>/npc/src/main/scala/core/MidStage.scala
text:
```scala
package npc.core

import chisel3._
import configs.StageIO
class MidStage[T <: StageIO](sio: T) extends Module {
  val io = IO(new Bundle {
    // pipeline control
    val flush     = Input(Bool())
    val stallPrev = Input(Bool())
    val stallNext = Input(Bool())
    // IO of previous/next stage
    val prev      = Input(sio)
    val next      = Output(sio)
  })

  // latch stage IO in every cycle
  val ff = RegInit(sio, sio.default())
  when (io.flush ) {
    ff := sio.default()
  } 。@@
  .elsewhen(!io.stallPrev) {
    ff := io.prev
  }

  io.next := ff
}
```



#### Error stacktrace:

```
dotty.tools.pc.completions.KeywordsCompletions$.checkTemplateForNewParents$$anonfun$2(KeywordsCompletions.scala:218)
	scala.Option.map(Option.scala:242)
	dotty.tools.pc.completions.KeywordsCompletions$.checkTemplateForNewParents(KeywordsCompletions.scala:215)
	dotty.tools.pc.completions.KeywordsCompletions$.contribute(KeywordsCompletions.scala:44)
	dotty.tools.pc.completions.Completions.completions(Completions.scala:124)
	dotty.tools.pc.completions.CompletionProvider.completions(CompletionProvider.scala:90)
	dotty.tools.pc.ScalaPresentationCompiler.complete$$anonfun$1(ScalaPresentationCompiler.scala:146)
```
#### Short summary: 

scala.MatchError: TypeDef(T,TypeBoundsTree(EmptyTree,Ident(StageIO),EmptyTree)) (of class dotty.tools.dotc.ast.Trees$TypeDef)