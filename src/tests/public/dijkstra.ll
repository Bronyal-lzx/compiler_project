declare i32 @getch( )
declare i32 @getint( )
declare void @putch( i32 )
declare void @putint( i32 )
declare void @putarray( i32, i32* )
declare void @_sysy_starttime( i32 )
declare void @_sysy_stoptime( i32 )
@INF = global i32 65535
%array2D = type { [16 x i32 ] }
@e = global [ 16 x %array2D ] zeroinitializer
@book = global [ 16 x i32 ] zeroinitializer
@dis = global [ 16 x i32 ] zeroinitializer
@n = global i32 0
@m = global i32 0
@v1 = global i32 0
@v2 = global i32 0
@w = global i32 0
define void @Dijkstra( ) {
bb1:
  %r242 = add i32 0, 0
  %r243 = add i32 0, 0
  %r244 = add i32 0, 0
  %r245 = add i32 0, 0
  %r246 = add i32 0, 0
  %r247 = add i32 1, 0
  br label %bb2

bb2:
  %r248 = phi i32 [ %r247, %bb1 ], [ %r266, %bb3 ]
  %r102 = load i32, i32* @n
  %r103 = icmp sle i32 %r248, %r102
  br i1 %r103, label %bb3, label %bb4

bb3:
  %r105 = getelementptr [16 x i32 ], [16 x i32 ]* @dis, i32 0, i32 %r248
  %r106 = getelementptr [16 x %array2D ], [16 x %array2D ]* @e, i32 0, i32 1
  %r107 = getelementptr [16 x %array2D ], [16 x %array2D ]* %r106, i32 0, i32 0
  %r109 = getelementptr [16 x i32 ], [16 x i32 ]* %r107, i32 0, i32 %r248
  %r110 = load i32, i32* %r109
  store i32 %r110, i32* %r105
  %r112 = getelementptr [16 x i32 ], [16 x i32 ]* @book, i32 0, i32 %r248
  store i32 0, i32* %r112
  %r114 = add i32 %r248, 1
  %r266 = add i32 %r114, 0
  br label %bb2

bb4:
  %r115 = getelementptr [16 x i32 ], [16 x i32 ]* @book, i32 0, i32 1
  store i32 1, i32* %r115
  %r249 = add i32 1, 0
  br label %bb5

bb5:
  %r250 = phi i32 [ %r249, %bb4 ], [ %r259, %bb16 ]
  %r117 = load i32, i32* @n
  %r118 = sub i32 %r117, 1
  %r119 = icmp sle i32 %r250, %r118
  br i1 %r119, label %bb6, label %bb7

bb6:
  %r121 = load i32, i32* @INF
  %r251 = add i32 %r121, 0
  %r252 = add i32 0, 0
  %r253 = add i32 1, 0
  br label %bb8

bb8:
  %r254 = phi i32 [ %r253, %bb6 ], [ %r263, %bb12 ]
  %r255 = phi i32 [ %r252, %bb6 ], [ %r261, %bb12 ]
  %r256 = phi i32 [ %r251, %bb6 ], [ %r262, %bb12 ]
  %r125 = load i32, i32* @n
  %r126 = icmp sle i32 %r254, %r125
  br i1 %r126, label %bb9, label %bb10

bb9:
  %r129 = getelementptr [16 x i32 ], [16 x i32 ]* @dis, i32 0, i32 %r254
  %r130 = load i32, i32* %r129
  %r131 = icmp sgt i32 %r256, %r130
  br i1 %r131, label %bb13, label %bb12

bb13:
  %r133 = getelementptr [16 x i32 ], [16 x i32 ]* @book, i32 0, i32 %r254
  %r134 = load i32, i32* %r133
  %r135 = icmp eq i32 %r134, 0
  br i1 %r135, label %bb11, label %bb12

bb11:
  %r137 = getelementptr [16 x i32 ], [16 x i32 ]* @dis, i32 0, i32 %r254
  %r138 = load i32, i32* %r137
  %r264 = add i32 %r138, 0
  %r265 = add i32 %r254, 0
  br label %bb12

bb12:
  %r261 = phi i32 [ %r255, %bb9 ], [ %r255, %bb13 ], [ %r265, %bb11 ]
  %r262 = phi i32 [ %r256, %bb9 ], [ %r256, %bb13 ], [ %r264, %bb11 ]
  %r141 = add i32 %r254, 1
  %r263 = add i32 %r141, 0
  br label %bb8

bb10:
  %r143 = getelementptr [16 x i32 ], [16 x i32 ]* @book, i32 0, i32 %r255
  store i32 1, i32* %r143
  %r257 = add i32 1, 0
  br label %bb14

bb14:
  %r258 = phi i32 [ %r257, %bb10 ], [ %r260, %bb18 ]
  %r146 = load i32, i32* @n
  %r147 = icmp sle i32 %r258, %r146
  br i1 %r147, label %bb15, label %bb16

bb15:
  %r149 = getelementptr [16 x %array2D ], [16 x %array2D ]* @e, i32 0, i32 %r255
  %r150 = getelementptr [16 x %array2D ], [16 x %array2D ]* %r149, i32 0, i32 0
  %r152 = getelementptr [16 x i32 ], [16 x i32 ]* %r150, i32 0, i32 %r258
  %r153 = load i32, i32* %r152
  %r154 = load i32, i32* @INF
  %r155 = icmp slt i32 %r153, %r154
  br i1 %r155, label %bb17, label %bb18

bb17:
  %r157 = getelementptr [16 x i32 ], [16 x i32 ]* @dis, i32 0, i32 %r258
  %r158 = load i32, i32* %r157
  %r160 = getelementptr [16 x i32 ], [16 x i32 ]* @dis, i32 0, i32 %r255
  %r161 = load i32, i32* %r160
  %r163 = getelementptr [16 x %array2D ], [16 x %array2D ]* @e, i32 0, i32 %r255
  %r164 = getelementptr [16 x %array2D ], [16 x %array2D ]* %r163, i32 0, i32 0
  %r166 = getelementptr [16 x i32 ], [16 x i32 ]* %r164, i32 0, i32 %r258
  %r167 = load i32, i32* %r166
  %r168 = add i32 %r161, %r167
  %r169 = icmp sgt i32 %r158, %r168
  br i1 %r169, label %bb19, label %bb20

bb19:
  %r171 = getelementptr [16 x i32 ], [16 x i32 ]* @dis, i32 0, i32 %r258
  %r173 = getelementptr [16 x i32 ], [16 x i32 ]* @dis, i32 0, i32 %r255
  %r174 = load i32, i32* %r173
  %r176 = getelementptr [16 x %array2D ], [16 x %array2D ]* @e, i32 0, i32 %r255
  %r177 = getelementptr [16 x %array2D ], [16 x %array2D ]* %r176, i32 0, i32 0
  %r179 = getelementptr [16 x i32 ], [16 x i32 ]* %r177, i32 0, i32 %r258
  %r180 = load i32, i32* %r179
  %r181 = add i32 %r174, %r180
  store i32 %r181, i32* %r171
  br label %bb20

bb20:
  br label %bb18

bb18:
  %r183 = add i32 %r258, 1
  %r260 = add i32 %r183, 0
  br label %bb14

bb16:
  %r185 = add i32 %r250, 1
  %r259 = add i32 %r185, 0
  br label %bb5

bb7:
  ret void
}

define i32 @main( ) {
bb21:
  %r271 = add i32 0, 0
  %r272 = add i32 0, 0
  %r273 = add i32 0, 0
  call void @_sysy_starttime(i32 53)
  %r274 = add i32 0, 0
  %r187 = call i32 @getint()
  store i32 %r187, i32* @n
  %r188 = call i32 @getint()
  store i32 %r188, i32* @m
  %r275 = add i32 1, 0
  br label %bb22

bb22:
  %r276 = phi i32 [ %r275, %bb21 ], [ %r287, %bb27 ]
  %r190 = load i32, i32* @n
  %r191 = icmp sle i32 %r276, %r190
  br i1 %r191, label %bb23, label %bb24

bb23:
  %r285 = add i32 1, 0
  br label %bb25

bb25:
  %r286 = phi i32 [ %r285, %bb23 ], [ %r288, %bb30 ]
  %r194 = load i32, i32* @n
  %r195 = icmp sle i32 %r286, %r194
  br i1 %r195, label %bb26, label %bb27

bb26:
  %r198 = icmp eq i32 %r276, %r286
  br i1 %r198, label %bb28, label %bb29

bb28:
  %r200 = getelementptr [16 x %array2D ], [16 x %array2D ]* @e, i32 0, i32 %r276
  %r201 = getelementptr [16 x %array2D ], [16 x %array2D ]* %r200, i32 0, i32 0
  %r203 = getelementptr [16 x i32 ], [16 x i32 ]* %r201, i32 0, i32 %r286
  store i32 0, i32* %r203
  br label %bb30

bb29:
  %r205 = getelementptr [16 x %array2D ], [16 x %array2D ]* @e, i32 0, i32 %r276
  %r206 = getelementptr [16 x %array2D ], [16 x %array2D ]* %r205, i32 0, i32 0
  %r208 = getelementptr [16 x i32 ], [16 x i32 ]* %r206, i32 0, i32 %r286
  %r209 = load i32, i32* @INF
  store i32 %r209, i32* %r208
  br label %bb30

bb30:
  %r211 = add i32 %r286, 1
  %r288 = add i32 %r211, 0
  br label %bb25

bb27:
  %r213 = add i32 %r276, 1
  %r287 = add i32 %r213, 0
  br label %bb22

bb24:
  %r277 = add i32 1, 0
  br label %bb31

bb31:
  %r278 = phi i32 [ %r277, %bb24 ], [ %r284, %bb32 ]
  %r215 = load i32, i32* @m
  %r216 = icmp sle i32 %r278, %r215
  br i1 %r216, label %bb32, label %bb33

bb32:
  %r218 = call i32 @getint()
  %r282 = add i32 %r218, 0
  %r220 = call i32 @getint()
  %r283 = add i32 %r220, 0
  %r222 = getelementptr [16 x %array2D ], [16 x %array2D ]* @e, i32 0, i32 %r282
  %r223 = getelementptr [16 x %array2D ], [16 x %array2D ]* %r222, i32 0, i32 0
  %r225 = getelementptr [16 x i32 ], [16 x i32 ]* %r223, i32 0, i32 %r283
  %r226 = call i32 @getint()
  store i32 %r226, i32* %r225
  %r228 = add i32 %r278, 1
  %r284 = add i32 %r228, 0
  br label %bb31

bb33:
  call void @Dijkstra()
  %r279 = add i32 1, 0
  br label %bb34

bb34:
  %r280 = phi i32 [ %r279, %bb33 ], [ %r281, %bb35 ]
  %r230 = load i32, i32* @n
  %r231 = icmp sle i32 %r280, %r230
  br i1 %r231, label %bb35, label %bb36

bb35:
  %r233 = getelementptr [16 x i32 ], [16 x i32 ]* @dis, i32 0, i32 %r280
  %r234 = load i32, i32* %r233
  call void @putint(i32 %r234)
  call void @putch(i32 32)
  %r236 = add i32 %r280, 1
  %r281 = add i32 %r236, 0
  br label %bb34

bb36:
  call void @putch(i32 10)
  call void @_sysy_stoptime(i32 91)
  ret i32 0
}
