; ModuleID = 'llvm-link'
source_filename = "llvm-link"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

%struct.timeval = type { i64, i64 }

@a1 = global i32 1
@a2 = global i32 2
@a3 = global i32 3
@a4 = global i32 4
@a5 = global i32 5
@a6 = global i32 6
@a7 = global i32 7
@a8 = global i32 8
@a9 = global i32 9
@a10 = global i32 10
@a11 = global i32 11
@a12 = global i32 12
@a13 = global i32 13
@a14 = global i32 14
@a15 = global i32 15
@a16 = global i32 16
@a17 = global i32 1
@a18 = global i32 2
@a19 = global i32 3
@a20 = global i32 4
@a21 = global i32 5
@a22 = global i32 6
@a23 = global i32 7
@a24 = global i32 8
@a25 = global i32 9
@a26 = global i32 10
@a27 = global i32 11
@a28 = global i32 12
@a29 = global i32 13
@a30 = global i32 14
@a31 = global i32 15
@a32 = global i32 16
@llvm.global_ctors = appending global [1 x { i32, ptr, ptr }] [{ i32, ptr, ptr } { i32 65535, ptr @before_main, ptr null }]
@llvm.global_dtors = appending global [1 x { i32, ptr, ptr }] [{ i32, ptr, ptr } { i32 65535, ptr @after_main, ptr null }]
@.str = private unnamed_addr constant [3 x i8] c"%d\00", align 1
@.str.1 = private unnamed_addr constant [3 x i8] c"%c\00", align 1
@.str.2 = private unnamed_addr constant [4 x i8] c"%d:\00", align 1
@.str.3 = private unnamed_addr constant [4 x i8] c" %d\00", align 1
@.str.4 = private unnamed_addr constant [2 x i8] c"\0A\00", align 1
@_sysy_us = dso_local global [1024 x i32] zeroinitializer, align 16
@_sysy_s = dso_local global [1024 x i32] zeroinitializer, align 16
@_sysy_m = dso_local global [1024 x i32] zeroinitializer, align 16
@_sysy_h = dso_local global [1024 x i32] zeroinitializer, align 16
@_sysy_idx = dso_local global i32 0, align 4
@stderr = external global ptr, align 8
@.str.5 = private unnamed_addr constant [35 x i8] c"Timer@%04d-%04d: %dH-%dM-%dS-%dus\0A\00", align 1
@_sysy_l1 = dso_local global [1024 x i32] zeroinitializer, align 16
@_sysy_l2 = dso_local global [1024 x i32] zeroinitializer, align 16
@.str.6 = private unnamed_addr constant [25 x i8] c"TOTAL: %dH-%dM-%dS-%dus\0A\00", align 1
@_sysy_start = dso_local global %struct.timeval zeroinitializer, align 8
@_sysy_end = dso_local global %struct.timeval zeroinitializer, align 8

define i32 @func(i32 %r100, i32 %r102) {
bb1:
  %r611 = add i32 0, 0
  %r612 = add i32 %r100, 0
  %r613 = add i32 0, 0
  %r614 = add i32 %r102, 0
  %r615 = add i32 0, 0
  %r107 = add i32 %r612, %r614
  %r616 = add i32 %r107, 0
  %r617 = add i32 0, 0
  %r618 = add i32 0, 0
  %r619 = add i32 0, 0
  %r620 = add i32 0, 0
  %r621 = add i32 0, 0
  %r622 = add i32 0, 0
  %r623 = add i32 0, 0
  %r624 = add i32 0, 0
  %r625 = add i32 0, 0
  %r626 = add i32 0, 0
  %r627 = add i32 0, 0
  %r628 = add i32 0, 0
  %r629 = add i32 0, 0
  %r630 = add i32 0, 0
  %r631 = add i32 0, 0
  %r632 = add i32 0, 0
  %r633 = add i32 0, 0
  %r634 = add i32 0, 0
  %r635 = add i32 0, 0
  %r636 = add i32 0, 0
  %r637 = add i32 0, 0
  %r638 = add i32 0, 0
  %r639 = add i32 0, 0
  %r640 = add i32 0, 0
  %r641 = add i32 0, 0
  %r642 = add i32 0, 0
  %r643 = add i32 0, 0
  %r644 = add i32 0, 0
  %r645 = add i32 0, 0
  %r646 = add i32 0, 0
  %r647 = add i32 0, 0
  %r648 = add i32 0, 0
  %r649 = add i32 0, 0
  %r650 = add i32 0, 0
  %r651 = add i32 0, 0
  %r652 = add i32 0, 0
  %r144 = call i32 @getint()
  %r653 = add i32 %r144, 0
  %r145 = call i32 @getint()
  %r654 = add i32 %r145, 0
  %r146 = call i32 @getint()
  %r655 = add i32 %r146, 0
  %r147 = call i32 @getint()
  %r656 = add i32 %r147, 0
  %r149 = add i32 1, %r653
  %r150 = load i32, ptr @a1, align 4
  %r151 = add i32 %r149, %r150
  %r657 = add i32 %r151, 0
  %r153 = add i32 2, %r654
  %r154 = load i32, ptr @a2, align 4
  %r155 = add i32 %r153, %r154
  %r658 = add i32 %r155, 0
  %r157 = add i32 3, %r655
  %r158 = load i32, ptr @a3, align 4
  %r159 = add i32 %r157, %r158
  %r659 = add i32 %r159, 0
  %r161 = add i32 4, %r656
  %r162 = load i32, ptr @a4, align 4
  %r163 = add i32 %r161, %r162
  %r660 = add i32 %r163, 0
  %r165 = add i32 1, %r657
  %r166 = load i32, ptr @a5, align 4
  %r167 = add i32 %r165, %r166
  %r661 = add i32 %r167, 0
  %r169 = add i32 2, %r658
  %r170 = load i32, ptr @a6, align 4
  %r171 = add i32 %r169, %r170
  %r662 = add i32 %r171, 0
  %r173 = add i32 3, %r659
  %r174 = load i32, ptr @a7, align 4
  %r175 = add i32 %r173, %r174
  %r663 = add i32 %r175, 0
  %r177 = add i32 4, %r660
  %r178 = load i32, ptr @a8, align 4
  %r179 = add i32 %r177, %r178
  %r664 = add i32 %r179, 0
  %r181 = add i32 1, %r661
  %r182 = load i32, ptr @a9, align 4
  %r183 = add i32 %r181, %r182
  %r665 = add i32 %r183, 0
  %r185 = add i32 2, %r662
  %r186 = load i32, ptr @a10, align 4
  %r187 = add i32 %r185, %r186
  %r666 = add i32 %r187, 0
  %r189 = add i32 3, %r663
  %r190 = load i32, ptr @a11, align 4
  %r191 = add i32 %r189, %r190
  %r667 = add i32 %r191, 0
  %r193 = add i32 4, %r664
  %r194 = load i32, ptr @a12, align 4
  %r195 = add i32 %r193, %r194
  %r668 = add i32 %r195, 0
  %r197 = add i32 1, %r665
  %r198 = load i32, ptr @a13, align 4
  %r199 = add i32 %r197, %r198
  %r669 = add i32 %r199, 0
  %r201 = add i32 2, %r666
  %r202 = load i32, ptr @a14, align 4
  %r203 = add i32 %r201, %r202
  %r670 = add i32 %r203, 0
  %r205 = add i32 3, %r667
  %r206 = load i32, ptr @a15, align 4
  %r207 = add i32 %r205, %r206
  %r671 = add i32 %r207, 0
  %r209 = add i32 4, %r668
  %r210 = load i32, ptr @a16, align 4
  %r211 = add i32 %r209, %r210
  %r672 = add i32 %r211, 0
  %r213 = add i32 1, %r669
  %r214 = load i32, ptr @a17, align 4
  %r215 = add i32 %r213, %r214
  %r673 = add i32 %r215, 0
  %r217 = add i32 2, %r670
  %r218 = load i32, ptr @a18, align 4
  %r219 = add i32 %r217, %r218
  %r674 = add i32 %r219, 0
  %r221 = add i32 3, %r671
  %r222 = load i32, ptr @a19, align 4
  %r223 = add i32 %r221, %r222
  %r675 = add i32 %r223, 0
  %r225 = add i32 4, %r672
  %r226 = load i32, ptr @a20, align 4
  %r227 = add i32 %r225, %r226
  %r676 = add i32 %r227, 0
  %r229 = add i32 1, %r673
  %r230 = load i32, ptr @a21, align 4
  %r231 = add i32 %r229, %r230
  %r677 = add i32 %r231, 0
  %r233 = add i32 2, %r674
  %r234 = load i32, ptr @a22, align 4
  %r235 = add i32 %r233, %r234
  %r678 = add i32 %r235, 0
  %r237 = add i32 3, %r675
  %r238 = load i32, ptr @a23, align 4
  %r239 = add i32 %r237, %r238
  %r679 = add i32 %r239, 0
  %r241 = add i32 4, %r676
  %r242 = load i32, ptr @a24, align 4
  %r243 = add i32 %r241, %r242
  %r680 = add i32 %r243, 0
  %r245 = add i32 1, %r677
  %r246 = load i32, ptr @a25, align 4
  %r247 = add i32 %r245, %r246
  %r681 = add i32 %r247, 0
  %r249 = add i32 2, %r678
  %r250 = load i32, ptr @a26, align 4
  %r251 = add i32 %r249, %r250
  %r682 = add i32 %r251, 0
  %r253 = add i32 3, %r679
  %r254 = load i32, ptr @a27, align 4
  %r255 = add i32 %r253, %r254
  %r683 = add i32 %r255, 0
  %r257 = add i32 4, %r680
  %r258 = load i32, ptr @a28, align 4
  %r259 = add i32 %r257, %r258
  %r684 = add i32 %r259, 0
  %r261 = add i32 1, %r681
  %r262 = load i32, ptr @a29, align 4
  %r263 = add i32 %r261, %r262
  %r685 = add i32 %r263, 0
  %r265 = add i32 2, %r682
  %r266 = load i32, ptr @a30, align 4
  %r267 = add i32 %r265, %r266
  %r686 = add i32 %r267, 0
  %r269 = add i32 3, %r683
  %r270 = load i32, ptr @a31, align 4
  %r271 = add i32 %r269, %r270
  %r687 = add i32 %r271, 0
  %r273 = add i32 4, %r684
  %r274 = load i32, ptr @a32, align 4
  %r275 = add i32 %r273, %r274
  %r688 = add i32 %r275, 0
  %r278 = sub i32 %r612, %r614
  %r279 = add i32 %r278, 10
  %r689 = add i32 %r279, 0
  %r281 = add i32 1, %r681
  %r282 = load i32, ptr @a29, align 4
  %r283 = add i32 %r281, %r282
  %r690 = add i32 %r283, 0
  %r285 = add i32 2, %r682
  %r286 = load i32, ptr @a30, align 4
  %r287 = add i32 %r285, %r286
  %r691 = add i32 %r287, 0
  %r289 = add i32 3, %r683
  %r290 = load i32, ptr @a31, align 4
  %r291 = add i32 %r289, %r290
  %r692 = add i32 %r291, 0
  %r293 = add i32 4, %r684
  %r294 = load i32, ptr @a32, align 4
  %r295 = add i32 %r293, %r294
  %r693 = add i32 %r295, 0
  %r297 = add i32 1, %r677
  %r298 = load i32, ptr @a25, align 4
  %r299 = add i32 %r297, %r298
  %r694 = add i32 %r299, 0
  %r301 = add i32 2, %r678
  %r302 = load i32, ptr @a26, align 4
  %r303 = add i32 %r301, %r302
  %r695 = add i32 %r303, 0
  %r305 = add i32 3, %r679
  %r306 = load i32, ptr @a27, align 4
  %r307 = add i32 %r305, %r306
  %r696 = add i32 %r307, 0
  %r309 = add i32 4, %r680
  %r310 = load i32, ptr @a28, align 4
  %r311 = add i32 %r309, %r310
  %r697 = add i32 %r311, 0
  %r313 = add i32 1, %r673
  %r314 = load i32, ptr @a21, align 4
  %r315 = add i32 %r313, %r314
  %r698 = add i32 %r315, 0
  %r317 = add i32 2, %r674
  %r318 = load i32, ptr @a22, align 4
  %r319 = add i32 %r317, %r318
  %r699 = add i32 %r319, 0
  %r321 = add i32 3, %r675
  %r322 = load i32, ptr @a23, align 4
  %r323 = add i32 %r321, %r322
  %r700 = add i32 %r323, 0
  %r325 = add i32 4, %r676
  %r326 = load i32, ptr @a24, align 4
  %r327 = add i32 %r325, %r326
  %r701 = add i32 %r327, 0
  %r329 = add i32 1, %r669
  %r330 = load i32, ptr @a17, align 4
  %r331 = add i32 %r329, %r330
  %r702 = add i32 %r331, 0
  %r333 = add i32 2, %r670
  %r334 = load i32, ptr @a18, align 4
  %r335 = add i32 %r333, %r334
  %r703 = add i32 %r335, 0
  %r337 = add i32 3, %r671
  %r338 = load i32, ptr @a19, align 4
  %r339 = add i32 %r337, %r338
  %r704 = add i32 %r339, 0
  %r341 = add i32 4, %r672
  %r342 = load i32, ptr @a20, align 4
  %r343 = add i32 %r341, %r342
  %r705 = add i32 %r343, 0
  %r345 = add i32 1, %r665
  %r346 = load i32, ptr @a13, align 4
  %r347 = add i32 %r345, %r346
  %r706 = add i32 %r347, 0
  %r349 = add i32 2, %r666
  %r350 = load i32, ptr @a14, align 4
  %r351 = add i32 %r349, %r350
  %r707 = add i32 %r351, 0
  %r353 = add i32 3, %r667
  %r354 = load i32, ptr @a15, align 4
  %r355 = add i32 %r353, %r354
  %r708 = add i32 %r355, 0
  %r357 = add i32 4, %r668
  %r358 = load i32, ptr @a16, align 4
  %r359 = add i32 %r357, %r358
  %r709 = add i32 %r359, 0
  %r361 = add i32 1, %r661
  %r362 = load i32, ptr @a9, align 4
  %r363 = add i32 %r361, %r362
  %r710 = add i32 %r363, 0
  %r365 = add i32 2, %r662
  %r366 = load i32, ptr @a10, align 4
  %r367 = add i32 %r365, %r366
  %r711 = add i32 %r367, 0
  %r369 = add i32 3, %r663
  %r370 = load i32, ptr @a11, align 4
  %r371 = add i32 %r369, %r370
  %r712 = add i32 %r371, 0
  %r373 = add i32 4, %r664
  %r374 = load i32, ptr @a12, align 4
  %r375 = add i32 %r373, %r374
  %r713 = add i32 %r375, 0
  %r377 = add i32 1, %r657
  %r378 = load i32, ptr @a5, align 4
  %r379 = add i32 %r377, %r378
  %r714 = add i32 %r379, 0
  %r381 = add i32 2, %r658
  %r382 = load i32, ptr @a6, align 4
  %r383 = add i32 %r381, %r382
  %r715 = add i32 %r383, 0
  %r385 = add i32 3, %r659
  %r386 = load i32, ptr @a7, align 4
  %r387 = add i32 %r385, %r386
  %r716 = add i32 %r387, 0
  %r389 = add i32 4, %r660
  %r390 = load i32, ptr @a8, align 4
  %r391 = add i32 %r389, %r390
  %r717 = add i32 %r391, 0
  %r393 = add i32 1, %r653
  %r394 = load i32, ptr @a1, align 4
  %r395 = add i32 %r393, %r394
  %r718 = add i32 %r395, 0
  %r397 = add i32 2, %r654
  %r398 = load i32, ptr @a2, align 4
  %r399 = add i32 %r397, %r398
  %r719 = add i32 %r399, 0
  %r401 = add i32 3, %r655
  %r402 = load i32, ptr @a3, align 4
  %r403 = add i32 %r401, %r402
  %r720 = add i32 %r403, 0
  %r405 = add i32 4, %r656
  %r406 = load i32, ptr @a4, align 4
  %r407 = add i32 %r405, %r406
  %r721 = add i32 %r407, 0
  %r409 = add i32 1, %r653
  %r410 = load i32, ptr @a1, align 4
  %r411 = add i32 %r409, %r410
  %r722 = add i32 %r411, 0
  %r413 = add i32 2, %r654
  %r414 = load i32, ptr @a2, align 4
  %r415 = add i32 %r413, %r414
  %r723 = add i32 %r415, 0
  %r417 = add i32 3, %r655
  %r418 = load i32, ptr @a3, align 4
  %r419 = add i32 %r417, %r418
  %r724 = add i32 %r419, 0
  %r421 = add i32 4, %r656
  %r422 = load i32, ptr @a4, align 4
  %r423 = add i32 %r421, %r422
  %r725 = add i32 %r423, 0
  %r426 = add i32 %r689, %r653
  %r428 = add i32 %r426, %r654
  %r430 = add i32 %r428, %r655
  %r432 = add i32 %r430, %r656
  %r434 = sub i32 %r432, %r722
  %r436 = sub i32 %r434, %r723
  %r438 = sub i32 %r436, %r724
  %r440 = sub i32 %r438, %r725
  %r442 = add i32 %r440, %r714
  %r444 = add i32 %r442, %r715
  %r446 = add i32 %r444, %r716
  %r448 = add i32 %r446, %r717
  %r450 = sub i32 %r448, %r710
  %r452 = sub i32 %r450, %r711
  %r454 = sub i32 %r452, %r712
  %r456 = sub i32 %r454, %r713
  %r458 = add i32 %r456, %r706
  %r460 = add i32 %r458, %r707
  %r462 = add i32 %r460, %r708
  %r464 = add i32 %r462, %r709
  %r466 = sub i32 %r464, %r702
  %r468 = sub i32 %r466, %r703
  %r470 = sub i32 %r468, %r704
  %r472 = sub i32 %r470, %r705
  %r474 = add i32 %r472, %r698
  %r476 = add i32 %r474, %r699
  %r478 = add i32 %r476, %r700
  %r480 = add i32 %r478, %r701
  %r482 = sub i32 %r480, %r694
  %r484 = sub i32 %r482, %r695
  %r486 = sub i32 %r484, %r696
  %r488 = sub i32 %r486, %r697
  %r490 = add i32 %r488, %r690
  %r492 = add i32 %r490, %r691
  %r494 = add i32 %r492, %r692
  %r496 = add i32 %r494, %r693
  %r497 = load i32, ptr @a1, align 4
  %r498 = add i32 %r496, %r497
  %r499 = load i32, ptr @a2, align 4
  %r500 = sub i32 %r498, %r499
  %r501 = load i32, ptr @a3, align 4
  %r502 = add i32 %r500, %r501
  %r503 = load i32, ptr @a4, align 4
  %r504 = sub i32 %r502, %r503
  %r505 = load i32, ptr @a5, align 4
  %r506 = add i32 %r504, %r505
  %r507 = load i32, ptr @a6, align 4
  %r508 = sub i32 %r506, %r507
  %r509 = load i32, ptr @a7, align 4
  %r510 = add i32 %r508, %r509
  %r511 = load i32, ptr @a8, align 4
  %r512 = sub i32 %r510, %r511
  %r513 = load i32, ptr @a9, align 4
  %r514 = add i32 %r512, %r513
  %r515 = load i32, ptr @a10, align 4
  %r516 = sub i32 %r514, %r515
  %r517 = load i32, ptr @a11, align 4
  %r518 = add i32 %r516, %r517
  %r519 = load i32, ptr @a12, align 4
  %r520 = sub i32 %r518, %r519
  %r521 = load i32, ptr @a13, align 4
  %r522 = add i32 %r520, %r521
  %r523 = load i32, ptr @a14, align 4
  %r524 = sub i32 %r522, %r523
  %r525 = load i32, ptr @a15, align 4
  %r526 = add i32 %r524, %r525
  %r527 = load i32, ptr @a16, align 4
  %r528 = sub i32 %r526, %r527
  %r529 = load i32, ptr @a17, align 4
  %r530 = add i32 %r528, %r529
  %r531 = load i32, ptr @a18, align 4
  %r532 = sub i32 %r530, %r531
  %r533 = load i32, ptr @a19, align 4
  %r534 = add i32 %r532, %r533
  %r535 = load i32, ptr @a20, align 4
  %r536 = sub i32 %r534, %r535
  %r537 = load i32, ptr @a21, align 4
  %r538 = add i32 %r536, %r537
  %r539 = load i32, ptr @a22, align 4
  %r540 = sub i32 %r538, %r539
  %r541 = load i32, ptr @a23, align 4
  %r542 = add i32 %r540, %r541
  %r543 = load i32, ptr @a24, align 4
  %r544 = sub i32 %r542, %r543
  %r545 = load i32, ptr @a25, align 4
  %r546 = add i32 %r544, %r545
  %r547 = load i32, ptr @a26, align 4
  %r548 = sub i32 %r546, %r547
  %r549 = load i32, ptr @a27, align 4
  %r550 = add i32 %r548, %r549
  %r551 = load i32, ptr @a28, align 4
  %r552 = sub i32 %r550, %r551
  %r553 = load i32, ptr @a29, align 4
  %r554 = add i32 %r552, %r553
  %r555 = load i32, ptr @a30, align 4
  %r556 = sub i32 %r554, %r555
  %r557 = load i32, ptr @a31, align 4
  %r558 = add i32 %r556, %r557
  %r559 = load i32, ptr @a32, align 4
  %r560 = sub i32 %r558, %r559
  ret i32 %r560
}

define i32 @main() {
bb2:
  call void @_sysy_starttime(i32 87)
  %r728 = add i32 0, 0
  %r729 = add i32 0, 0
  %r563 = call i32 @getint()
  %r730 = add i32 %r563, 0
  %r565 = mul i32 2, 9
  %r566 = add i32 %r730, %r565
  %r731 = add i32 %r566, 0
  %r569 = call i32 @func(i32 %r730, i32 %r731)
  %r732 = add i32 %r569, 0
  call void @putint(i32 %r732)
  call void @_sysy_stoptime(i32 93)
  ret i32 %r732
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @before_main() #0 {
  %1 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  br label %2

2:                                                ; preds = %18, %0
  %3 = load i32, ptr %1, align 4
  %4 = icmp slt i32 %3, 1024
  br i1 %4, label %5, label %21

5:                                                ; preds = %2
  %6 = load i32, ptr %1, align 4
  %7 = sext i32 %6 to i64
  %8 = getelementptr inbounds [1024 x i32], ptr @_sysy_us, i64 0, i64 %7
  store i32 0, ptr %8, align 4
  %9 = load i32, ptr %1, align 4
  %10 = sext i32 %9 to i64
  %11 = getelementptr inbounds [1024 x i32], ptr @_sysy_s, i64 0, i64 %10
  store i32 0, ptr %11, align 4
  %12 = load i32, ptr %1, align 4
  %13 = sext i32 %12 to i64
  %14 = getelementptr inbounds [1024 x i32], ptr @_sysy_m, i64 0, i64 %13
  store i32 0, ptr %14, align 4
  %15 = load i32, ptr %1, align 4
  %16 = sext i32 %15 to i64
  %17 = getelementptr inbounds [1024 x i32], ptr @_sysy_h, i64 0, i64 %16
  store i32 0, ptr %17, align 4
  br label %18

18:                                               ; preds = %5
  %19 = load i32, ptr %1, align 4
  %20 = add nsw i32 %19, 1
  store i32 %20, ptr %1, align 4
  br label %2, !llvm.loop !6

21:                                               ; preds = %2
  store i32 1, ptr @_sysy_idx, align 4
  ret void
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @after_main() #0 {
  %1 = alloca i32, align 4
  store i32 1, ptr %1, align 4
  br label %2

2:                                                ; preds = %63, %0
  %3 = load i32, ptr %1, align 4
  %4 = load i32, ptr @_sysy_idx, align 4
  %5 = icmp slt i32 %3, %4
  br i1 %5, label %6, label %66

6:                                                ; preds = %2
  %7 = load ptr, ptr @stderr, align 8
  %8 = load i32, ptr %1, align 4
  %9 = sext i32 %8 to i64
  %10 = getelementptr inbounds [1024 x i32], ptr @_sysy_l1, i64 0, i64 %9
  %11 = load i32, ptr %10, align 4
  %12 = load i32, ptr %1, align 4
  %13 = sext i32 %12 to i64
  %14 = getelementptr inbounds [1024 x i32], ptr @_sysy_l2, i64 0, i64 %13
  %15 = load i32, ptr %14, align 4
  %16 = load i32, ptr %1, align 4
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds [1024 x i32], ptr @_sysy_h, i64 0, i64 %17
  %19 = load i32, ptr %18, align 4
  %20 = load i32, ptr %1, align 4
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds [1024 x i32], ptr @_sysy_m, i64 0, i64 %21
  %23 = load i32, ptr %22, align 4
  %24 = load i32, ptr %1, align 4
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds [1024 x i32], ptr @_sysy_s, i64 0, i64 %25
  %27 = load i32, ptr %26, align 4
  %28 = load i32, ptr %1, align 4
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds [1024 x i32], ptr @_sysy_us, i64 0, i64 %29
  %31 = load i32, ptr %30, align 4
  %32 = call i32 (ptr, ptr, ...) @fprintf(ptr noundef %7, ptr noundef getelementptr inbounds ([35 x i8], ptr @.str.5, i64 0, i64 0), i32 noundef %11, i32 noundef %15, i32 noundef %19, i32 noundef %23, i32 noundef %27, i32 noundef %31)
  %33 = load i32, ptr %1, align 4
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds [1024 x i32], ptr @_sysy_us, i64 0, i64 %34
  %36 = load i32, ptr %35, align 4
  %37 = load i32, ptr getelementptr inbounds ([1024 x i32], ptr @_sysy_us, i64 0, i64 0), align 16
  %38 = add nsw i32 %37, %36
  store i32 %38, ptr getelementptr inbounds ([1024 x i32], ptr @_sysy_us, i64 0, i64 0), align 16
  %39 = load i32, ptr %1, align 4
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds [1024 x i32], ptr @_sysy_s, i64 0, i64 %40
  %42 = load i32, ptr %41, align 4
  %43 = load i32, ptr getelementptr inbounds ([1024 x i32], ptr @_sysy_s, i64 0, i64 0), align 16
  %44 = add nsw i32 %43, %42
  store i32 %44, ptr getelementptr inbounds ([1024 x i32], ptr @_sysy_s, i64 0, i64 0), align 16
  %45 = load i32, ptr getelementptr inbounds ([1024 x i32], ptr @_sysy_us, i64 0, i64 0), align 16
  %46 = srem i32 %45, 1000000
  store i32 %46, ptr getelementptr inbounds ([1024 x i32], ptr @_sysy_us, i64 0, i64 0), align 16
  %47 = load i32, ptr %1, align 4
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds [1024 x i32], ptr @_sysy_m, i64 0, i64 %48
  %50 = load i32, ptr %49, align 4
  %51 = load i32, ptr getelementptr inbounds ([1024 x i32], ptr @_sysy_m, i64 0, i64 0), align 16
  %52 = add nsw i32 %51, %50
  store i32 %52, ptr getelementptr inbounds ([1024 x i32], ptr @_sysy_m, i64 0, i64 0), align 16
  %53 = load i32, ptr getelementptr inbounds ([1024 x i32], ptr @_sysy_s, i64 0, i64 0), align 16
  %54 = srem i32 %53, 60
  store i32 %54, ptr getelementptr inbounds ([1024 x i32], ptr @_sysy_s, i64 0, i64 0), align 16
  %55 = load i32, ptr %1, align 4
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds [1024 x i32], ptr @_sysy_h, i64 0, i64 %56
  %58 = load i32, ptr %57, align 4
  %59 = load i32, ptr getelementptr inbounds ([1024 x i32], ptr @_sysy_h, i64 0, i64 0), align 16
  %60 = add nsw i32 %59, %58
  store i32 %60, ptr getelementptr inbounds ([1024 x i32], ptr @_sysy_h, i64 0, i64 0), align 16
  %61 = load i32, ptr getelementptr inbounds ([1024 x i32], ptr @_sysy_m, i64 0, i64 0), align 16
  %62 = srem i32 %61, 60
  store i32 %62, ptr getelementptr inbounds ([1024 x i32], ptr @_sysy_m, i64 0, i64 0), align 16
  br label %63

63:                                               ; preds = %6
  %64 = load i32, ptr %1, align 4
  %65 = add nsw i32 %64, 1
  store i32 %65, ptr %1, align 4
  br label %2, !llvm.loop !8

66:                                               ; preds = %2
  %67 = load ptr, ptr @stderr, align 8
  %68 = load i32, ptr getelementptr inbounds ([1024 x i32], ptr @_sysy_h, i64 0, i64 0), align 16
  %69 = load i32, ptr getelementptr inbounds ([1024 x i32], ptr @_sysy_m, i64 0, i64 0), align 16
  %70 = load i32, ptr getelementptr inbounds ([1024 x i32], ptr @_sysy_s, i64 0, i64 0), align 16
  %71 = load i32, ptr getelementptr inbounds ([1024 x i32], ptr @_sysy_us, i64 0, i64 0), align 16
  %72 = call i32 (ptr, ptr, ...) @fprintf(ptr noundef %67, ptr noundef getelementptr inbounds ([25 x i8], ptr @.str.6, i64 0, i64 0), i32 noundef %68, i32 noundef %69, i32 noundef %70, i32 noundef %71)
  ret void
}

declare i32 @fprintf(ptr noundef, ptr noundef, ...) #1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @getint() #0 {
  %1 = alloca i32, align 4
  %2 = call i32 (ptr, ...) @__isoc99_scanf(ptr noundef getelementptr inbounds ([3 x i8], ptr @.str, i64 0, i64 0), ptr noundef %1)
  %3 = load i32, ptr %1, align 4
  ret i32 %3
}

declare i32 @__isoc99_scanf(ptr noundef, ...) #1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @getch() #0 {
  %1 = alloca i8, align 1
  %2 = call i32 (ptr, ...) @__isoc99_scanf(ptr noundef getelementptr inbounds ([3 x i8], ptr @.str.1, i64 0, i64 0), ptr noundef %1)
  %3 = load i8, ptr %1, align 1
  %4 = sext i8 %3 to i32
  ret i32 %4
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @getarray(ptr noundef %0) #0 {
  %2 = alloca ptr, align 8
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  store ptr %0, ptr %2, align 8
  %5 = call i32 (ptr, ...) @__isoc99_scanf(ptr noundef getelementptr inbounds ([3 x i8], ptr @.str, i64 0, i64 0), ptr noundef %3)
  store i32 0, ptr %4, align 4
  br label %6

6:                                                ; preds = %16, %1
  %7 = load i32, ptr %4, align 4
  %8 = load i32, ptr %3, align 4
  %9 = icmp slt i32 %7, %8
  br i1 %9, label %10, label %19

10:                                               ; preds = %6
  %11 = load ptr, ptr %2, align 8
  %12 = load i32, ptr %4, align 4
  %13 = sext i32 %12 to i64
  %14 = getelementptr inbounds i32, ptr %11, i64 %13
  %15 = call i32 (ptr, ...) @__isoc99_scanf(ptr noundef getelementptr inbounds ([3 x i8], ptr @.str, i64 0, i64 0), ptr noundef %14)
  br label %16

16:                                               ; preds = %10
  %17 = load i32, ptr %4, align 4
  %18 = add nsw i32 %17, 1
  store i32 %18, ptr %4, align 4
  br label %6, !llvm.loop !9

19:                                               ; preds = %6
  %20 = load i32, ptr %3, align 4
  ret i32 %20
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @putint(i32 noundef %0) #0 {
  %2 = alloca i32, align 4
  store i32 %0, ptr %2, align 4
  %3 = load i32, ptr %2, align 4
  %4 = call i32 (ptr, ...) @printf(ptr noundef getelementptr inbounds ([3 x i8], ptr @.str, i64 0, i64 0), i32 noundef %3)
  ret void
}

declare i32 @printf(ptr noundef, ...) #1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @putch(i32 noundef %0) #0 {
  %2 = alloca i32, align 4
  store i32 %0, ptr %2, align 4
  %3 = load i32, ptr %2, align 4
  %4 = call i32 (ptr, ...) @printf(ptr noundef getelementptr inbounds ([3 x i8], ptr @.str.1, i64 0, i64 0), i32 noundef %3)
  ret void
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @putarray(i32 noundef %0, ptr noundef %1) #0 {
  %3 = alloca i32, align 4
  %4 = alloca ptr, align 8
  %5 = alloca i32, align 4
  store i32 %0, ptr %3, align 4
  store ptr %1, ptr %4, align 8
  %6 = load i32, ptr %3, align 4
  %7 = call i32 (ptr, ...) @printf(ptr noundef getelementptr inbounds ([4 x i8], ptr @.str.2, i64 0, i64 0), i32 noundef %6)
  store i32 0, ptr %5, align 4
  br label %8

8:                                                ; preds = %19, %2
  %9 = load i32, ptr %5, align 4
  %10 = load i32, ptr %3, align 4
  %11 = icmp slt i32 %9, %10
  br i1 %11, label %12, label %22

12:                                               ; preds = %8
  %13 = load ptr, ptr %4, align 8
  %14 = load i32, ptr %5, align 4
  %15 = sext i32 %14 to i64
  %16 = getelementptr inbounds i32, ptr %13, i64 %15
  %17 = load i32, ptr %16, align 4
  %18 = call i32 (ptr, ...) @printf(ptr noundef getelementptr inbounds ([4 x i8], ptr @.str.3, i64 0, i64 0), i32 noundef %17)
  br label %19

19:                                               ; preds = %12
  %20 = load i32, ptr %5, align 4
  %21 = add nsw i32 %20, 1
  store i32 %21, ptr %5, align 4
  br label %8, !llvm.loop !10

22:                                               ; preds = %8
  %23 = call i32 (ptr, ...) @printf(ptr noundef getelementptr inbounds ([2 x i8], ptr @.str.4, i64 0, i64 0))
  ret void
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @_sysy_starttime(i32 noundef %0) #0 {
  %2 = alloca i32, align 4
  store i32 %0, ptr %2, align 4
  %3 = load i32, ptr %2, align 4
  %4 = load i32, ptr @_sysy_idx, align 4
  %5 = sext i32 %4 to i64
  %6 = getelementptr inbounds [1024 x i32], ptr @_sysy_l1, i64 0, i64 %5
  store i32 %3, ptr %6, align 4
  %7 = call i32 @gettimeofday(ptr noundef @_sysy_start, ptr noundef null) #3
  ret void
}

; Function Attrs: nounwind
declare i32 @gettimeofday(ptr noundef, ptr noundef) #2

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @_sysy_stoptime(i32 noundef %0) #0 {
  %2 = alloca i32, align 4
  store i32 %0, ptr %2, align 4
  %3 = call i32 @gettimeofday(ptr noundef @_sysy_end, ptr noundef null) #3
  %4 = load i32, ptr %2, align 4
  %5 = load i32, ptr @_sysy_idx, align 4
  %6 = sext i32 %5 to i64
  %7 = getelementptr inbounds [1024 x i32], ptr @_sysy_l2, i64 0, i64 %6
  store i32 %4, ptr %7, align 4
  %8 = load i64, ptr getelementptr inbounds (%struct.timeval, ptr @_sysy_end, i32 0, i32 0), align 8
  %9 = load i64, ptr getelementptr inbounds (%struct.timeval, ptr @_sysy_start, i32 0, i32 0), align 8
  %10 = sub nsw i64 %8, %9
  %11 = mul nsw i64 1000000, %10
  %12 = load i64, ptr getelementptr inbounds (%struct.timeval, ptr @_sysy_end, i32 0, i32 1), align 8
  %13 = add nsw i64 %11, %12
  %14 = load i64, ptr getelementptr inbounds (%struct.timeval, ptr @_sysy_start, i32 0, i32 1), align 8
  %15 = sub nsw i64 %13, %14
  %16 = load i32, ptr @_sysy_idx, align 4
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds [1024 x i32], ptr @_sysy_us, i64 0, i64 %17
  %19 = load i32, ptr %18, align 4
  %20 = sext i32 %19 to i64
  %21 = add nsw i64 %20, %15
  %22 = trunc i64 %21 to i32
  store i32 %22, ptr %18, align 4
  %23 = load i32, ptr @_sysy_idx, align 4
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds [1024 x i32], ptr @_sysy_us, i64 0, i64 %24
  %26 = load i32, ptr %25, align 4
  %27 = sdiv i32 %26, 1000000
  %28 = load i32, ptr @_sysy_idx, align 4
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds [1024 x i32], ptr @_sysy_s, i64 0, i64 %29
  %31 = load i32, ptr %30, align 4
  %32 = add nsw i32 %31, %27
  store i32 %32, ptr %30, align 4
  %33 = load i32, ptr @_sysy_idx, align 4
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds [1024 x i32], ptr @_sysy_us, i64 0, i64 %34
  %36 = load i32, ptr %35, align 4
  %37 = srem i32 %36, 1000000
  store i32 %37, ptr %35, align 4
  %38 = load i32, ptr @_sysy_idx, align 4
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds [1024 x i32], ptr @_sysy_s, i64 0, i64 %39
  %41 = load i32, ptr %40, align 4
  %42 = sdiv i32 %41, 60
  %43 = load i32, ptr @_sysy_idx, align 4
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds [1024 x i32], ptr @_sysy_m, i64 0, i64 %44
  %46 = load i32, ptr %45, align 4
  %47 = add nsw i32 %46, %42
  store i32 %47, ptr %45, align 4
  %48 = load i32, ptr @_sysy_idx, align 4
  %49 = sext i32 %48 to i64
  %50 = getelementptr inbounds [1024 x i32], ptr @_sysy_s, i64 0, i64 %49
  %51 = load i32, ptr %50, align 4
  %52 = srem i32 %51, 60
  store i32 %52, ptr %50, align 4
  %53 = load i32, ptr @_sysy_idx, align 4
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds [1024 x i32], ptr @_sysy_m, i64 0, i64 %54
  %56 = load i32, ptr %55, align 4
  %57 = sdiv i32 %56, 60
  %58 = load i32, ptr @_sysy_idx, align 4
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds [1024 x i32], ptr @_sysy_h, i64 0, i64 %59
  %61 = load i32, ptr %60, align 4
  %62 = add nsw i32 %61, %57
  store i32 %62, ptr %60, align 4
  %63 = load i32, ptr @_sysy_idx, align 4
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds [1024 x i32], ptr @_sysy_m, i64 0, i64 %64
  %66 = load i32, ptr %65, align 4
  %67 = srem i32 %66, 60
  store i32 %67, ptr %65, align 4
  %68 = load i32, ptr @_sysy_idx, align 4
  %69 = add nsw i32 %68, 1
  store i32 %69, ptr @_sysy_idx, align 4
  ret void
}

attributes #0 = { noinline nounwind optnone uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #1 = { "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #2 = { nounwind "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #3 = { nounwind }

!llvm.ident = !{!0}
!llvm.module.flags = !{!1, !2, !3, !4, !5}

!0 = !{!"Ubuntu clang version 14.0.0-1ubuntu1.1"}
!1 = !{i32 1, !"wchar_size", i32 4}
!2 = !{i32 7, !"PIC Level", i32 2}
!3 = !{i32 7, !"PIE Level", i32 2}
!4 = !{i32 7, !"uwtable", i32 1}
!5 = !{i32 7, !"frame-pointer", i32 2}
!6 = distinct !{!6, !7}
!7 = !{!"llvm.loop.mustprogress"}
!8 = distinct !{!8, !7}
!9 = distinct !{!9, !7}
!10 = distinct !{!10, !7}
