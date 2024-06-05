declare i32 @getch( )
declare i32 @getint( )
declare void @putch( i32 )
declare void @putint( i32 )
declare void @putarray( i32, i32* )
declare void @_sysy_starttime( i32 )
declare void @_sysy_stoptime( i32 )
@n = global i32 0
@m = global i32 0
@to = global [ 5005 x i32 ] zeroinitializer
@next = global [ 5005 x i32 ] zeroinitializer
@head = global [ 1005 x i32 ] zeroinitializer
@cnt = global i32 0
@vis = global [ 1005 x i32 ] zeroinitializer
define i32 @quickread( ) {
bb1:
  %r232 = add i32 0, 0
  %r101 = call i32 @getch()
  %r233 = add i32 %r101, 0
  %r234 = add i32 0, 0
  %r235 = add i32 0, 0
  %r236 = add i32 0, 0
  %r237 = add i32 0, 0
  br label %bb2

bb2:
  %r238 = phi i32 [ %r237, %bb1 ], [ %r240, %bb7 ]
  %r239 = phi i32 [ %r233, %bb1 ], [ %r241, %bb7 ]
  %r105 = icmp slt i32 %r239, 48
  br i1 %r105, label %bb3, label %bb5

bb5:
  %r107 = icmp sgt i32 %r239, 57
  br i1 %r107, label %bb3, label %bb4

bb3:
  %r109 = icmp eq i32 %r239, 45
  br i1 %r109, label %bb6, label %bb7

bb6:
  %r242 = add i32 1, 0
  br label %bb7

bb7:
  %r240 = phi i32 [ %r238, %bb3 ], [ %r242, %bb6 ]
  %r110 = call i32 @getch()
  %r241 = add i32 %r110, 0
  br label %bb2

bb4:
  br label %bb8

bb8:
  %r243 = phi i32 [ %r235, %bb4 ], [ %r245, %bb9 ]
  %r244 = phi i32 [ %r239, %bb4 ], [ %r246, %bb9 ]
  %r112 = icmp sge i32 %r244, 48
  br i1 %r112, label %bb11, label %bb10

bb11:
  %r114 = icmp sle i32 %r244, 57
  br i1 %r114, label %bb9, label %bb10

bb9:
  %r116 = mul i32 %r243, 10
  %r118 = add i32 %r116, %r244
  %r119 = sub i32 %r118, 48
  %r245 = add i32 %r119, 0
  %r120 = call i32 @getch()
  %r246 = add i32 %r120, 0
  br label %bb8

bb10:
  %r122 = icmp ne i32 %r238, 0
  br i1 %r122, label %bb12, label %bb13

bb12:
  %r124 = sub i32 0, %r243
  ret i32 %r124
bb13:
  ret i32 %r243
}

define void @addedge( i32 %r126, i32 %r128 ) {
bb15:
  %r249 = add i32 0, 0
  %r250 = add i32 %r126, 0
  %r251 = add i32 0, 0
  %r252 = add i32 %r128, 0
  %r130 = load i32, i32* @cnt
  %r131 = getelementptr [5005 x i32 ], [5005 x i32 ]* @to, i32 0, i32 %r130
  store i32 %r252, i32* %r131
  %r133 = load i32, i32* @cnt
  %r134 = getelementptr [5005 x i32 ], [5005 x i32 ]* @next, i32 0, i32 %r133
  %r136 = getelementptr [1005 x i32 ], [1005 x i32 ]* @head, i32 0, i32 %r250
  %r137 = load i32, i32* %r136
  store i32 %r137, i32* %r134
  %r139 = getelementptr [1005 x i32 ], [1005 x i32 ]* @head, i32 0, i32 %r250
  %r140 = load i32, i32* @cnt
  store i32 %r140, i32* %r139
  %r141 = load i32, i32* @cnt
  %r142 = add i32 %r141, 1
  store i32 %r142, i32* @cnt
  %r143 = load i32, i32* @cnt
  %r144 = getelementptr [5005 x i32 ], [5005 x i32 ]* @to, i32 0, i32 %r143
  store i32 %r250, i32* %r144
  %r146 = load i32, i32* @cnt
  %r147 = getelementptr [5005 x i32 ], [5005 x i32 ]* @next, i32 0, i32 %r146
  %r149 = getelementptr [1005 x i32 ], [1005 x i32 ]* @head, i32 0, i32 %r252
  %r150 = load i32, i32* %r149
  store i32 %r150, i32* %r147
  %r152 = getelementptr [1005 x i32 ], [1005 x i32 ]* @head, i32 0, i32 %r252
  %r153 = load i32, i32* @cnt
  store i32 %r153, i32* %r152
  %r154 = load i32, i32* @cnt
  %r155 = add i32 %r154, 1
  store i32 %r155, i32* @cnt
  ret void
}

define void @init( ) {
bb16:
  %r254 = add i32 0, 0
  %r255 = add i32 0, 0
  br label %bb17

bb17:
  %r256 = phi i32 [ %r255, %bb16 ], [ %r257, %bb18 ]
  %r158 = icmp slt i32 %r256, 1005
  br i1 %r158, label %bb18, label %bb19

bb18:
  %r160 = getelementptr [1005 x i32 ], [1005 x i32 ]* @head, i32 0, i32 %r256
  %r161 = sub i32 0, 1
  store i32 %r161, i32* %r160
  %r163 = add i32 %r256, 1
  %r257 = add i32 %r163, 0
  br label %bb17

bb19:
  ret void
}

define void @clear( ) {
bb20:
  %r259 = add i32 0, 0
  %r260 = add i32 1, 0
  br label %bb21

bb21:
  %r261 = phi i32 [ %r260, %bb20 ], [ %r262, %bb22 ]
  %r166 = load i32, i32* @n
  %r167 = icmp sle i32 %r261, %r166
  br i1 %r167, label %bb22, label %bb23

bb22:
  %r169 = getelementptr [1005 x i32 ], [1005 x i32 ]* @vis, i32 0, i32 %r261
  store i32 0, i32* %r169
  %r171 = add i32 %r261, 1
  %r262 = add i32 %r171, 0
  br label %bb21

bb23:
  ret void
}

define i32 @same( i32 %r172, i32 %r174 ) {
bb24:
  %r267 = add i32 0, 0
  %r268 = add i32 0, 0
  %r269 = add i32 0, 0
  %r270 = add i32 %r172, 0
  %r271 = add i32 0, 0
  %r272 = add i32 %r174, 0
  %r177 = getelementptr [1005 x i32 ], [1005 x i32 ]* @vis, i32 0, i32 %r270
  store i32 1, i32* %r177
  %r180 = icmp eq i32 %r270, %r272
  br i1 %r180, label %bb25, label %bb26

bb25:
  ret i32 1
bb26:
  %r183 = getelementptr [1005 x i32 ], [1005 x i32 ]* @head, i32 0, i32 %r270
  %r184 = load i32, i32* %r183
  %r273 = add i32 %r184, 0
  br label %bb27

bb27:
  %r274 = phi i32 [ %r273, %bb26 ], [ %r276, %bb31 ]
  %r186 = sub i32 0, 1
  %r187 = icmp ne i32 %r274, %r186
  br i1 %r187, label %bb28, label %bb29

bb28:
  %r190 = getelementptr [5005 x i32 ], [5005 x i32 ]* @to, i32 0, i32 %r274
  %r191 = load i32, i32* %r190
  %r275 = add i32 %r191, 0
  %r193 = getelementptr [1005 x i32 ], [1005 x i32 ]* @vis, i32 0, i32 %r275
  %r194 = load i32, i32* %r193
  %r195 = icmp eq i32 %r194, 0
  br i1 %r195, label %bb32, label %bb31

bb32:
  %r198 = call i32 @same(i32 %r275, i32 %r272)
  %r199 = icmp ne i32 %r198, 0
  br i1 %r199, label %bb30, label %bb31

bb30:
  ret i32 1
bb31:
  %r201 = getelementptr [5005 x i32 ], [5005 x i32 ]* @next, i32 0, i32 %r274
  %r202 = load i32, i32* %r201
  %r276 = add i32 %r202, 0
  br label %bb27

bb29:
  ret i32 0
}

define i32 @main( ) {
bb33:
  call void @_sysy_starttime(i32 74)
  %r203 = call i32 @quickread()
  store i32 %r203, i32* @n
  %r204 = call i32 @quickread()
  store i32 %r204, i32* @m
  call void @init()
  %r280 = add i32 0, 0
  %r281 = add i32 0, 0
  %r282 = add i32 0, 0
  %r283 = add i32 0, 0
  %r284 = add i32 0, 0
  %r285 = add i32 0, 0
  br label %bb34

bb34:
  %r208 = load i32, i32* @m
  %r209 = icmp ne i32 %r208, 0
  br i1 %r209, label %bb35, label %bb36

bb35:
  %r210 = call i32 @getch()
  %r286 = add i32 %r210, 0
  br label %bb37

bb37:
  %r287 = phi i32 [ %r286, %bb35 ], [ %r292, %bb38 ]
  %r212 = icmp ne i32 %r287, 81
  br i1 %r212, label %bb40, label %bb39

bb40:
  %r214 = icmp ne i32 %r287, 85
  br i1 %r214, label %bb38, label %bb39

bb38:
  %r215 = call i32 @getch()
  %r292 = add i32 %r215, 0
  br label %bb37

bb39:
  %r217 = icmp eq i32 %r287, 81
  br i1 %r217, label %bb41, label %bb42

bb41:
  %r218 = call i32 @quickread()
  %r290 = add i32 %r218, 0
  %r219 = call i32 @quickread()
  %r291 = add i32 %r219, 0
  call void @clear()
  %r222 = call i32 @same(i32 %r290, i32 %r291)
  call void @putint(i32 %r222)
  call void @putch(i32 10)
  br label %bb43

bb42:
  %r223 = call i32 @quickread()
  %r288 = add i32 %r223, 0
  %r224 = call i32 @quickread()
  %r289 = add i32 %r224, 0
  call void @addedge(i32 %r288, i32 %r289)
  br label %bb43

bb43:
  %r227 = load i32, i32* @m
  %r228 = sub i32 %r227, 1
  store i32 %r228, i32* @m
  br label %bb34

bb36:
  call void @_sysy_stoptime(i32 96)
  ret i32 0
}

