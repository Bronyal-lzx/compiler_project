declare i32 @getch( )
declare i32 @getint( )
declare void @putch( i32 )
declare void @putint( i32 )
declare void @putarray( i32, i32* )
declare void @_sysy_starttime( i32 )
declare void @_sysy_stoptime( i32 )
@n = global i32 0
define i32 @swap( i32* %r100, i32 %r101, i32 %r103 ) {
bb1:
  %r222 = add i32 0, 0
  %r223 = add i32 %r101, 0
  %r224 = add i32 0, 0
  %r225 = add i32 %r103, 0
  %r226 = add i32 0, 0
  %r107 = getelementptr [10 x i32 ], [10 x i32 ]* %r100, i32 0, i32 %r223
  %r108 = load i32, i32* %r107
  %r227 = add i32 %r108, 0
  %r110 = getelementptr [10 x i32 ], [10 x i32 ]* %r100, i32 0, i32 %r223
  %r112 = getelementptr [10 x i32 ], [10 x i32 ]* %r100, i32 0, i32 %r225
  %r113 = load i32, i32* %r112
  store i32 %r113, i32* %r110
  %r115 = getelementptr [10 x i32 ], [10 x i32 ]* %r100, i32 0, i32 %r225
  store i32 %r227, i32* %r115
  ret i32 0
}

define i32 @heap_ajust( i32* %r117, i32 %r118, i32 %r120 ) {
bb2:
  %r233 = add i32 0, 0
  %r234 = add i32 0, 0
  %r235 = add i32 %r118, 0
  %r236 = add i32 0, 0
  %r237 = add i32 %r120, 0
  %r238 = add i32 0, 0
  %r239 = add i32 %r235, 0
  %r240 = add i32 0, 0
  %r126 = mul i32 %r239, 2
  %r127 = add i32 %r126, 1
  %r241 = add i32 %r127, 0
  br label %bb3

bb3:
  %r242 = phi i32 [ %r241, %bb2 ], [ %r248, %bb11 ]
  %r243 = phi i32 [ %r239, %bb2 ], [ %r247, %bb11 ]
  %r130 = add i32 %r237, 1
  %r131 = icmp slt i32 %r242, %r130
  br i1 %r131, label %bb4, label %bb5

bb4:
  %r134 = add i32 %r242, 1
  %r244 = add i32 %r134, 0
  %r137 = icmp slt i32 %r242, %r237
  br i1 %r137, label %bb8, label %bb7

bb8:
  %r139 = getelementptr [10 x i32 ], [10 x i32 ]* %r117, i32 0, i32 %r242
  %r140 = load i32, i32* %r139
  %r142 = getelementptr [10 x i32 ], [10 x i32 ]* %r117, i32 0, i32 %r244
  %r143 = load i32, i32* %r142
  %r144 = icmp slt i32 %r140, %r143
  br i1 %r144, label %bb6, label %bb7

bb6:
  %r146 = add i32 %r242, 1
  %r249 = add i32 %r146, 0
  br label %bb7

bb7:
  %r245 = phi i32 [ %r242, %bb4 ], [ %r242, %bb8 ], [ %r249, %bb6 ]
  %r148 = getelementptr [10 x i32 ], [10 x i32 ]* %r117, i32 0, i32 %r243
  %r149 = load i32, i32* %r148
  %r151 = getelementptr [10 x i32 ], [10 x i32 ]* %r117, i32 0, i32 %r245
  %r152 = load i32, i32* %r151
  %r153 = icmp sgt i32 %r149, %r152
  br i1 %r153, label %bb9, label %bb10

bb9:
  ret i32 0
bb10:
  %r156 = call i32 @swap(i32* %r117, i32 %r243, i32 %r245)
  %r246 = add i32 %r156, 0
  %r247 = add i32 %r245, 0
  %r159 = mul i32 %r247, 2
  %r160 = add i32 %r159, 1
  %r248 = add i32 %r160, 0
  br label %bb11

bb11:
  br label %bb3

bb5:
  ret i32 0
}

define i32 @heap_sort( i32* %r161, i32 %r162 ) {
bb12:
  %r254 = add i32 0, 0
  %r255 = add i32 0, 0
  %r256 = add i32 %r162, 0
  %r257 = add i32 0, 0
  %r258 = add i32 0, 0
  %r167 = sdiv i32 %r256, 2
  %r168 = sub i32 %r167, 1
  %r259 = add i32 %r168, 0
  br label %bb13

bb13:
  %r260 = phi i32 [ %r259, %bb12 ], [ %r270, %bb14 ]
  %r170 = sub i32 0, 1
  %r171 = icmp sgt i32 %r260, %r170
  br i1 %r171, label %bb14, label %bb15

bb14:
  %r173 = sub i32 %r256, 1
  %r268 = add i32 %r173, 0
  %r176 = call i32 @heap_ajust(i32* %r161, i32 %r260, i32 %r268)
  %r269 = add i32 %r176, 0
  %r178 = sub i32 %r260, 1
  %r270 = add i32 %r178, 0
  br label %bb13

bb15:
  %r180 = sub i32 %r256, 1
  %r261 = add i32 %r180, 0
  br label %bb16

bb16:
  %r262 = phi i32 [ %r261, %bb15 ], [ %r267, %bb17 ]
  %r182 = icmp sgt i32 %r262, 0
  br i1 %r182, label %bb17, label %bb18

bb17:
  %r263 = add i32 0, 0
  %r186 = call i32 @swap(i32* %r161, i32 %r263, i32 %r262)
  %r264 = add i32 %r186, 0
  %r188 = sub i32 %r262, 1
  %r265 = add i32 %r188, 0
  %r191 = call i32 @heap_ajust(i32* %r161, i32 %r263, i32 %r265)
  %r266 = add i32 %r191, 0
  %r193 = sub i32 %r262, 1
  %r267 = add i32 %r193, 0
  br label %bb16

bb18:
  ret i32 0
}

define i32 @main( ) {
bb19:
  %r273 = add i32 0, 0
  call void @_sysy_starttime(i32 50)
  store i32 10, i32* @n
  %r194 = alloca [ 10 x i32 ]
  %r195 = getelementptr [10 x i32 ], [10 x i32 ]* %r194, i32 0, i32 0
  store i32 4, i32* %r195
  %r196 = getelementptr [10 x i32 ], [10 x i32 ]* %r194, i32 0, i32 1
  store i32 3, i32* %r196
  %r197 = getelementptr [10 x i32 ], [10 x i32 ]* %r194, i32 0, i32 2
  store i32 9, i32* %r197
  %r198 = getelementptr [10 x i32 ], [10 x i32 ]* %r194, i32 0, i32 3
  store i32 2, i32* %r198
  %r199 = getelementptr [10 x i32 ], [10 x i32 ]* %r194, i32 0, i32 4
  store i32 0, i32* %r199
  %r200 = getelementptr [10 x i32 ], [10 x i32 ]* %r194, i32 0, i32 5
  store i32 1, i32* %r200
  %r201 = getelementptr [10 x i32 ], [10 x i32 ]* %r194, i32 0, i32 6
  store i32 6, i32* %r201
  %r202 = getelementptr [10 x i32 ], [10 x i32 ]* %r194, i32 0, i32 7
  store i32 5, i32* %r202
  %r203 = getelementptr [10 x i32 ], [10 x i32 ]* %r194, i32 0, i32 8
  store i32 7, i32* %r203
  %r204 = getelementptr [10 x i32 ], [10 x i32 ]* %r194, i32 0, i32 9
  store i32 8, i32* %r204
  %r274 = add i32 0, 0
  %r275 = add i32 0, 0
  %r206 = load i32, i32* @n
  %r207 = call i32 @heap_sort(i32* %r194, i32 %r206)
  %r276 = add i32 %r207, 0
  br label %bb20

bb20:
  %r277 = phi i32 [ %r276, %bb19 ], [ %r280, %bb21 ]
  %r209 = load i32, i32* @n
  %r210 = icmp slt i32 %r277, %r209
  br i1 %r210, label %bb21, label %bb22

bb21:
  %r213 = getelementptr [10 x i32 ], [10 x i32 ]* %r194, i32 0, i32 %r277
  %r214 = load i32, i32* %r213
  %r278 = add i32 %r214, 0
  call void @putint(i32 %r278)
  %r279 = add i32 10, 0
  call void @putch(i32 %r279)
  %r218 = add i32 %r277, 1
  %r280 = add i32 %r218, 0
  br label %bb20

bb22:
  call void @_sysy_stoptime(i32 66)
  ret i32 0
}

