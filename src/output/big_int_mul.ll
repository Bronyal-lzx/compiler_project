; ModuleID = 'llvm-link'
source_filename = "llvm-link"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

%struct.timeval = type { i64, i64 }

@len = global i32 20
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

define i32 @main() {
bb1:
  %r261 = add i32 0, 0
  call void @_sysy_starttime(i32 97)
  %r262 = add i32 0, 0
  %r263 = add i32 0, 0
  %r264 = add i32 0, 0
  %r265 = add i32 0, 0
  %r266 = add i32 0, 0
  %r105 = alloca [20 x i32], align 4
  %r106 = getelementptr [20 x i32], ptr %r105, i32 0, i32 0
  store i32 1, ptr %r106, align 4
  %r107 = getelementptr [20 x i32], ptr %r105, i32 0, i32 1
  store i32 2, ptr %r107, align 4
  %r108 = getelementptr [20 x i32], ptr %r105, i32 0, i32 2
  store i32 3, ptr %r108, align 4
  %r109 = getelementptr [20 x i32], ptr %r105, i32 0, i32 3
  store i32 4, ptr %r109, align 4
  %r110 = getelementptr [20 x i32], ptr %r105, i32 0, i32 4
  store i32 5, ptr %r110, align 4
  %r111 = getelementptr [20 x i32], ptr %r105, i32 0, i32 5
  store i32 6, ptr %r111, align 4
  %r112 = getelementptr [20 x i32], ptr %r105, i32 0, i32 6
  store i32 7, ptr %r112, align 4
  %r113 = getelementptr [20 x i32], ptr %r105, i32 0, i32 7
  store i32 8, ptr %r113, align 4
  %r114 = getelementptr [20 x i32], ptr %r105, i32 0, i32 8
  store i32 9, ptr %r114, align 4
  %r115 = getelementptr [20 x i32], ptr %r105, i32 0, i32 9
  store i32 0, ptr %r115, align 4
  %r116 = getelementptr [20 x i32], ptr %r105, i32 0, i32 10
  store i32 1, ptr %r116, align 4
  %r117 = getelementptr [20 x i32], ptr %r105, i32 0, i32 11
  store i32 2, ptr %r117, align 4
  %r118 = getelementptr [20 x i32], ptr %r105, i32 0, i32 12
  store i32 3, ptr %r118, align 4
  %r119 = getelementptr [20 x i32], ptr %r105, i32 0, i32 13
  store i32 4, ptr %r119, align 4
  %r120 = getelementptr [20 x i32], ptr %r105, i32 0, i32 14
  store i32 5, ptr %r120, align 4
  %r121 = getelementptr [20 x i32], ptr %r105, i32 0, i32 15
  store i32 6, ptr %r121, align 4
  %r122 = getelementptr [20 x i32], ptr %r105, i32 0, i32 16
  store i32 7, ptr %r122, align 4
  %r123 = getelementptr [20 x i32], ptr %r105, i32 0, i32 17
  store i32 8, ptr %r123, align 4
  %r124 = getelementptr [20 x i32], ptr %r105, i32 0, i32 18
  store i32 9, ptr %r124, align 4
  %r125 = getelementptr [20 x i32], ptr %r105, i32 0, i32 19
  store i32 0, ptr %r125, align 4
  %r126 = alloca [20 x i32], align 4
  %r127 = getelementptr [20 x i32], ptr %r126, i32 0, i32 0
  store i32 2, ptr %r127, align 4
  %r128 = getelementptr [20 x i32], ptr %r126, i32 0, i32 1
  store i32 3, ptr %r128, align 4
  %r129 = getelementptr [20 x i32], ptr %r126, i32 0, i32 2
  store i32 4, ptr %r129, align 4
  %r130 = getelementptr [20 x i32], ptr %r126, i32 0, i32 3
  store i32 2, ptr %r130, align 4
  %r131 = getelementptr [20 x i32], ptr %r126, i32 0, i32 4
  store i32 5, ptr %r131, align 4
  %r132 = getelementptr [20 x i32], ptr %r126, i32 0, i32 5
  store i32 7, ptr %r132, align 4
  %r133 = getelementptr [20 x i32], ptr %r126, i32 0, i32 6
  store i32 9, ptr %r133, align 4
  %r134 = getelementptr [20 x i32], ptr %r126, i32 0, i32 7
  store i32 9, ptr %r134, align 4
  %r135 = getelementptr [20 x i32], ptr %r126, i32 0, i32 8
  store i32 0, ptr %r135, align 4
  %r136 = getelementptr [20 x i32], ptr %r126, i32 0, i32 9
  store i32 1, ptr %r136, align 4
  %r137 = getelementptr [20 x i32], ptr %r126, i32 0, i32 10
  store i32 9, ptr %r137, align 4
  %r138 = getelementptr [20 x i32], ptr %r126, i32 0, i32 11
  store i32 8, ptr %r138, align 4
  %r139 = getelementptr [20 x i32], ptr %r126, i32 0, i32 12
  store i32 7, ptr %r139, align 4
  %r140 = getelementptr [20 x i32], ptr %r126, i32 0, i32 13
  store i32 6, ptr %r140, align 4
  %r141 = getelementptr [20 x i32], ptr %r126, i32 0, i32 14
  store i32 4, ptr %r141, align 4
  %r142 = getelementptr [20 x i32], ptr %r126, i32 0, i32 15
  store i32 3, ptr %r142, align 4
  %r143 = getelementptr [20 x i32], ptr %r126, i32 0, i32 16
  store i32 2, ptr %r143, align 4
  %r144 = getelementptr [20 x i32], ptr %r126, i32 0, i32 17
  store i32 1, ptr %r144, align 4
  %r145 = getelementptr [20 x i32], ptr %r126, i32 0, i32 18
  store i32 2, ptr %r145, align 4
  %r146 = getelementptr [20 x i32], ptr %r126, i32 0, i32 19
  store i32 2, ptr %r146, align 4
  %r267 = add i32 0, 0
  %r148 = load i32, ptr @len, align 4
  %r268 = add i32 %r148, 0
  %r269 = add i32 0, 0
  %r150 = load i32, ptr @len, align 4
  %r270 = add i32 %r150, 0
  %r151 = alloca [25 x i32], align 4
  %r152 = alloca [25 x i32], align 4
  %r153 = alloca [40 x i32], align 4
  %r154 = getelementptr [40 x i32], ptr %r153, i32 0, i32 0
  store i32 0, ptr %r154, align 4
  %r271 = add i32 0, 0
  br label %bb2

bb2:                                              ; preds = %bb3, %bb1
  %r272 = phi i32 [ %r271, %bb1 ], [ %r297, %bb3 ]
  %r157 = icmp slt i32 %r272, %r268
  br i1 %r157, label %bb3, label %bb4

bb3:                                              ; preds = %bb2
  %r159 = getelementptr [25 x i32], ptr %r151, i32 0, i32 %r272
  %r161 = getelementptr [20 x i32], ptr %r105, i32 0, i32 %r272
  %r162 = load i32, ptr %r161, align 4
  store i32 %r162, ptr %r159, align 4
  %r164 = add i32 %r272, 1
  %r297 = add i32 %r164, 0
  br label %bb2

bb4:                                              ; preds = %bb2
  %r273 = add i32 0, 0
  br label %bb5

bb5:                                              ; preds = %bb6, %bb4
  %r274 = phi i32 [ %r273, %bb4 ], [ %r296, %bb6 ]
  %r167 = icmp slt i32 %r274, %r270
  br i1 %r167, label %bb6, label %bb7

bb6:                                              ; preds = %bb5
  %r169 = getelementptr [25 x i32], ptr %r152, i32 0, i32 %r274
  %r171 = getelementptr [20 x i32], ptr %r126, i32 0, i32 %r274
  %r172 = load i32, ptr %r171, align 4
  store i32 %r172, ptr %r169, align 4
  %r174 = add i32 %r274, 1
  %r296 = add i32 %r174, 0
  br label %bb5

bb7:                                              ; preds = %bb5
  %r177 = add i32 %r268, %r270
  %r178 = sub i32 %r177, 1
  %r275 = add i32 %r178, 0
  %r276 = add i32 0, 0
  br label %bb8

bb8:                                              ; preds = %bb9, %bb7
  %r277 = phi i32 [ %r276, %bb7 ], [ %r295, %bb9 ]
  %r181 = icmp sle i32 %r277, %r275
  br i1 %r181, label %bb9, label %bb10

bb9:                                              ; preds = %bb8
  %r183 = getelementptr [40 x i32], ptr %r153, i32 0, i32 %r277
  store i32 0, ptr %r183, align 4
  %r185 = add i32 %r277, 1
  %r295 = add i32 %r185, 0
  br label %bb8

bb10:                                             ; preds = %bb8
  %r278 = add i32 0, 0
  %r187 = sub i32 %r270, 1
  %r279 = add i32 %r187, 0
  br label %bb11

bb11:                                             ; preds = %bb16, %bb10
  %r280 = phi i32 [ %r275, %bb10 ], [ %r289, %bb16 ]
  %r281 = phi i32 [ %r279, %bb10 ], [ %r290, %bb16 ]
  %r189 = sub i32 0, 1
  %r190 = icmp sgt i32 %r281, %r189
  br i1 %r190, label %bb12, label %bb13

bb12:                                             ; preds = %bb11
  %r192 = getelementptr [25 x i32], ptr %r152, i32 0, i32 %r281
  %r193 = load i32, ptr %r192, align 4
  %r285 = add i32 %r193, 0
  %r195 = sub i32 %r268, 1
  %r286 = add i32 %r195, 0
  br label %bb14

bb14:                                             ; preds = %bb19, %bb12
  %r287 = phi i32 [ %r286, %bb12 ], [ %r292, %bb19 ]
  %r288 = phi i32 [ %r280, %bb12 ], [ %r293, %bb19 ]
  %r197 = sub i32 0, 1
  %r198 = icmp sgt i32 %r287, %r197
  br i1 %r198, label %bb15, label %bb16

bb15:                                             ; preds = %bb14
  %r200 = getelementptr [40 x i32], ptr %r153, i32 0, i32 %r288
  %r201 = load i32, ptr %r200, align 4
  %r204 = getelementptr [25 x i32], ptr %r151, i32 0, i32 %r287
  %r205 = load i32, ptr %r204, align 4
  %r206 = mul i32 %r285, %r205
  %r207 = add i32 %r201, %r206
  %r291 = add i32 %r207, 0
  %r209 = icmp sge i32 %r291, 10
  br i1 %r209, label %bb17, label %bb18

bb17:                                             ; preds = %bb15
  %r211 = getelementptr [40 x i32], ptr %r153, i32 0, i32 %r288
  store i32 %r291, ptr %r211, align 4
  %r215 = sub i32 %r288, 1
  %r294 = add i32 %r215, 0
  %r217 = getelementptr [40 x i32], ptr %r153, i32 0, i32 %r294
  %r219 = getelementptr [40 x i32], ptr %r153, i32 0, i32 %r294
  %r220 = load i32, ptr %r219, align 4
  %r222 = sdiv i32 %r291, 10
  %r223 = add i32 %r220, %r222
  store i32 %r223, ptr %r217, align 4
  br label %bb19

bb18:                                             ; preds = %bb15
  %r225 = getelementptr [40 x i32], ptr %r153, i32 0, i32 %r288
  store i32 %r291, ptr %r225, align 4
  br label %bb19

bb19:                                             ; preds = %bb18, %bb17
  %r228 = sub i32 %r287, 1
  %r292 = add i32 %r228, 0
  %r230 = sub i32 %r288, 1
  %r293 = add i32 %r230, 0
  br label %bb14

bb16:                                             ; preds = %bb14
  %r233 = add i32 %r288, %r268
  %r234 = sub i32 %r233, 1
  %r289 = add i32 %r234, 0
  %r236 = sub i32 %r281, 1
  %r290 = add i32 %r236, 0
  br label %bb11

bb13:                                             ; preds = %bb11
  %r237 = getelementptr [40 x i32], ptr %r153, i32 0, i32 0
  %r238 = load i32, ptr %r237, align 4
  %r239 = icmp ne i32 %r238, 0
  br i1 %r239, label %bb20, label %bb21

bb20:                                             ; preds = %bb13
  %r240 = getelementptr [40 x i32], ptr %r153, i32 0, i32 0
  %r241 = load i32, ptr %r240, align 4
  call void @putint(i32 %r241)
  br label %bb21

bb21:                                             ; preds = %bb20, %bb13
  %r282 = add i32 1, 0
  br label %bb22

bb22:                                             ; preds = %bb23, %bb21
  %r283 = phi i32 [ %r282, %bb21 ], [ %r284, %bb23 ]
  %r245 = add i32 %r268, %r270
  %r246 = sub i32 %r245, 1
  %r247 = icmp sle i32 %r283, %r246
  br i1 %r247, label %bb23, label %bb24

bb23:                                             ; preds = %bb22
  %r249 = getelementptr [40 x i32], ptr %r153, i32 0, i32 %r283
  %r250 = load i32, ptr %r249, align 4
  call void @putint(i32 %r250)
  %r252 = add i32 %r283, 1
  %r284 = add i32 %r252, 0
  br label %bb22

bb24:                                             ; preds = %bb22
  call void @_sysy_stoptime(i32 117)
  ret i32 0
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
