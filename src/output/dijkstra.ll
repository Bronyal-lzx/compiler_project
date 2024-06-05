; ModuleID = 'llvm-link'
source_filename = "llvm-link"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

%array2D = type { [16 x i32] }
%struct.timeval = type { i64, i64 }

@INF = global i32 65535
@e = global [16 x %array2D] zeroinitializer
@book = global [16 x i32] zeroinitializer
@dis = global [16 x i32] zeroinitializer
@n = global i32 0
@m = global i32 0
@v1 = global i32 0
@v2 = global i32 0
@w = global i32 0
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

define void @Dijkstra() {
bb1:
  %r242 = add i32 0, 0
  %r243 = add i32 0, 0
  %r244 = add i32 0, 0
  %r245 = add i32 0, 0
  %r246 = add i32 0, 0
  %r247 = add i32 1, 0
  br label %bb2

bb2:                                              ; preds = %bb3, %bb1
  %r248 = phi i32 [ %r247, %bb1 ], [ %r266, %bb3 ]
  %r102 = load i32, ptr @n, align 4
  %r103 = icmp sle i32 %r248, %r102
  br i1 %r103, label %bb3, label %bb4

bb3:                                              ; preds = %bb2
  %r105 = getelementptr [16 x i32], ptr @dis, i32 0, i32 %r248
  %r106 = getelementptr [16 x %array2D], ptr @e, i32 0, i32 1
  %r107 = getelementptr [16 x %array2D], ptr %r106, i32 0, i32 0
  %r109 = getelementptr [16 x i32], ptr %r107, i32 0, i32 %r248
  %r110 = load i32, ptr %r109, align 4
  store i32 %r110, ptr %r105, align 4
  %r112 = getelementptr [16 x i32], ptr @book, i32 0, i32 %r248
  store i32 0, ptr %r112, align 4
  %r114 = add i32 %r248, 1
  %r266 = add i32 %r114, 0
  br label %bb2

bb4:                                              ; preds = %bb2
  %r115 = getelementptr [16 x i32], ptr @book, i32 0, i32 1
  store i32 1, ptr %r115, align 4
  %r249 = add i32 1, 0
  br label %bb5

bb5:                                              ; preds = %bb16, %bb4
  %r250 = phi i32 [ %r249, %bb4 ], [ %r259, %bb16 ]
  %r117 = load i32, ptr @n, align 4
  %r118 = sub i32 %r117, 1
  %r119 = icmp sle i32 %r250, %r118
  br i1 %r119, label %bb6, label %bb7

bb6:                                              ; preds = %bb5
  %r121 = load i32, ptr @INF, align 4
  %r251 = add i32 %r121, 0
  %r252 = add i32 0, 0
  %r253 = add i32 1, 0
  br label %bb8

bb8:                                              ; preds = %bb12, %bb6
  %r254 = phi i32 [ %r253, %bb6 ], [ %r263, %bb12 ]
  %r255 = phi i32 [ %r252, %bb6 ], [ %r261, %bb12 ]
  %r256 = phi i32 [ %r251, %bb6 ], [ %r262, %bb12 ]
  %r125 = load i32, ptr @n, align 4
  %r126 = icmp sle i32 %r254, %r125
  br i1 %r126, label %bb9, label %bb10

bb9:                                              ; preds = %bb8
  %r129 = getelementptr [16 x i32], ptr @dis, i32 0, i32 %r254
  %r130 = load i32, ptr %r129, align 4
  %r131 = icmp sgt i32 %r256, %r130
  br i1 %r131, label %bb13, label %bb12

bb13:                                             ; preds = %bb9
  %r133 = getelementptr [16 x i32], ptr @book, i32 0, i32 %r254
  %r134 = load i32, ptr %r133, align 4
  %r135 = icmp eq i32 %r134, 0
  br i1 %r135, label %bb11, label %bb12

bb11:                                             ; preds = %bb13
  %r137 = getelementptr [16 x i32], ptr @dis, i32 0, i32 %r254
  %r138 = load i32, ptr %r137, align 4
  %r264 = add i32 %r138, 0
  %r265 = add i32 %r254, 0
  br label %bb12

bb12:                                             ; preds = %bb11, %bb13, %bb9
  %r261 = phi i32 [ %r255, %bb9 ], [ %r255, %bb13 ], [ %r265, %bb11 ]
  %r262 = phi i32 [ %r256, %bb9 ], [ %r256, %bb13 ], [ %r264, %bb11 ]
  %r141 = add i32 %r254, 1
  %r263 = add i32 %r141, 0
  br label %bb8

bb10:                                             ; preds = %bb8
  %r143 = getelementptr [16 x i32], ptr @book, i32 0, i32 %r255
  store i32 1, ptr %r143, align 4
  %r257 = add i32 1, 0
  br label %bb14

bb14:                                             ; preds = %bb18, %bb10
  %r258 = phi i32 [ %r257, %bb10 ], [ %r260, %bb18 ]
  %r146 = load i32, ptr @n, align 4
  %r147 = icmp sle i32 %r258, %r146
  br i1 %r147, label %bb15, label %bb16

bb15:                                             ; preds = %bb14
  %r149 = getelementptr [16 x %array2D], ptr @e, i32 0, i32 %r255
  %r150 = getelementptr [16 x %array2D], ptr %r149, i32 0, i32 0
  %r152 = getelementptr [16 x i32], ptr %r150, i32 0, i32 %r258
  %r153 = load i32, ptr %r152, align 4
  %r154 = load i32, ptr @INF, align 4
  %r155 = icmp slt i32 %r153, %r154
  br i1 %r155, label %bb17, label %bb18

bb17:                                             ; preds = %bb15
  %r157 = getelementptr [16 x i32], ptr @dis, i32 0, i32 %r258
  %r158 = load i32, ptr %r157, align 4
  %r160 = getelementptr [16 x i32], ptr @dis, i32 0, i32 %r255
  %r161 = load i32, ptr %r160, align 4
  %r163 = getelementptr [16 x %array2D], ptr @e, i32 0, i32 %r255
  %r164 = getelementptr [16 x %array2D], ptr %r163, i32 0, i32 0
  %r166 = getelementptr [16 x i32], ptr %r164, i32 0, i32 %r258
  %r167 = load i32, ptr %r166, align 4
  %r168 = add i32 %r161, %r167
  %r169 = icmp sgt i32 %r158, %r168
  br i1 %r169, label %bb19, label %bb20

bb19:                                             ; preds = %bb17
  %r171 = getelementptr [16 x i32], ptr @dis, i32 0, i32 %r258
  %r173 = getelementptr [16 x i32], ptr @dis, i32 0, i32 %r255
  %r174 = load i32, ptr %r173, align 4
  %r176 = getelementptr [16 x %array2D], ptr @e, i32 0, i32 %r255
  %r177 = getelementptr [16 x %array2D], ptr %r176, i32 0, i32 0
  %r179 = getelementptr [16 x i32], ptr %r177, i32 0, i32 %r258
  %r180 = load i32, ptr %r179, align 4
  %r181 = add i32 %r174, %r180
  store i32 %r181, ptr %r171, align 4
  br label %bb20

bb20:                                             ; preds = %bb19, %bb17
  br label %bb18

bb18:                                             ; preds = %bb20, %bb15
  %r183 = add i32 %r258, 1
  %r260 = add i32 %r183, 0
  br label %bb14

bb16:                                             ; preds = %bb14
  %r185 = add i32 %r250, 1
  %r259 = add i32 %r185, 0
  br label %bb5

bb7:                                              ; preds = %bb5
  ret void
}

define i32 @main() {
bb21:
  %r271 = add i32 0, 0
  %r272 = add i32 0, 0
  %r273 = add i32 0, 0
  call void @_sysy_starttime(i32 53)
  %r274 = add i32 0, 0
  %r187 = call i32 @getint()
  store i32 %r187, ptr @n, align 4
  %r188 = call i32 @getint()
  store i32 %r188, ptr @m, align 4
  %r275 = add i32 1, 0
  br label %bb22

bb22:                                             ; preds = %bb27, %bb21
  %r276 = phi i32 [ %r275, %bb21 ], [ %r287, %bb27 ]
  %r190 = load i32, ptr @n, align 4
  %r191 = icmp sle i32 %r276, %r190
  br i1 %r191, label %bb23, label %bb24

bb23:                                             ; preds = %bb22
  %r285 = add i32 1, 0
  br label %bb25

bb25:                                             ; preds = %bb30, %bb23
  %r286 = phi i32 [ %r285, %bb23 ], [ %r288, %bb30 ]
  %r194 = load i32, ptr @n, align 4
  %r195 = icmp sle i32 %r286, %r194
  br i1 %r195, label %bb26, label %bb27

bb26:                                             ; preds = %bb25
  %r198 = icmp eq i32 %r276, %r286
  br i1 %r198, label %bb28, label %bb29

bb28:                                             ; preds = %bb26
  %r200 = getelementptr [16 x %array2D], ptr @e, i32 0, i32 %r276
  %r201 = getelementptr [16 x %array2D], ptr %r200, i32 0, i32 0
  %r203 = getelementptr [16 x i32], ptr %r201, i32 0, i32 %r286
  store i32 0, ptr %r203, align 4
  br label %bb30

bb29:                                             ; preds = %bb26
  %r205 = getelementptr [16 x %array2D], ptr @e, i32 0, i32 %r276
  %r206 = getelementptr [16 x %array2D], ptr %r205, i32 0, i32 0
  %r208 = getelementptr [16 x i32], ptr %r206, i32 0, i32 %r286
  %r209 = load i32, ptr @INF, align 4
  store i32 %r209, ptr %r208, align 4
  br label %bb30

bb30:                                             ; preds = %bb29, %bb28
  %r211 = add i32 %r286, 1
  %r288 = add i32 %r211, 0
  br label %bb25

bb27:                                             ; preds = %bb25
  %r213 = add i32 %r276, 1
  %r287 = add i32 %r213, 0
  br label %bb22

bb24:                                             ; preds = %bb22
  %r277 = add i32 1, 0
  br label %bb31

bb31:                                             ; preds = %bb32, %bb24
  %r278 = phi i32 [ %r277, %bb24 ], [ %r284, %bb32 ]
  %r215 = load i32, ptr @m, align 4
  %r216 = icmp sle i32 %r278, %r215
  br i1 %r216, label %bb32, label %bb33

bb32:                                             ; preds = %bb31
  %r218 = call i32 @getint()
  %r282 = add i32 %r218, 0
  %r220 = call i32 @getint()
  %r283 = add i32 %r220, 0
  %r222 = getelementptr [16 x %array2D], ptr @e, i32 0, i32 %r282
  %r223 = getelementptr [16 x %array2D], ptr %r222, i32 0, i32 0
  %r225 = getelementptr [16 x i32], ptr %r223, i32 0, i32 %r283
  %r226 = call i32 @getint()
  store i32 %r226, ptr %r225, align 4
  %r228 = add i32 %r278, 1
  %r284 = add i32 %r228, 0
  br label %bb31

bb33:                                             ; preds = %bb31
  call void @Dijkstra()
  %r279 = add i32 1, 0
  br label %bb34

bb34:                                             ; preds = %bb35, %bb33
  %r280 = phi i32 [ %r279, %bb33 ], [ %r281, %bb35 ]
  %r230 = load i32, ptr @n, align 4
  %r231 = icmp sle i32 %r280, %r230
  br i1 %r231, label %bb35, label %bb36

bb35:                                             ; preds = %bb34
  %r233 = getelementptr [16 x i32], ptr @dis, i32 0, i32 %r280
  %r234 = load i32, ptr %r233, align 4
  call void @putint(i32 %r234)
  call void @putch(i32 32)
  %r236 = add i32 %r280, 1
  %r281 = add i32 %r236, 0
  br label %bb34

bb36:                                             ; preds = %bb34
  call void @putch(i32 10)
  call void @_sysy_stoptime(i32 91)
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