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
@que = global [ 1005 x i32 ] zeroinitializer
@h = global i32 0
@tail = global i32 0
@inq = global [ 1005 x i32 ] zeroinitializer
define i32 @quickread( ) {
bb1:
  %r257 = add i32 0, 0
  %r101 = call i32 @getch()
  %r258 = add i32 %r101, 0
  %r259 = add i32 0, 0
  %r260 = add i32 0, 0
  %r261 = add i32 0, 0
  %r262 = add i32 0, 0
  br label %bb2

bb2:
  %r263 = phi i32 [ %r262, %bb1 ], [ %r265, %bb7 ]
  %r264 = phi i32 [ %r258, %bb1 ], [ %r266, %bb7 ]
  %r105 = icmp slt i32 %r264, 48
  br i1 %r105, label %bb3, label %bb5

bb5:
  %r107 = icmp sgt i32 %r264, 57
  br i1 %r107, label %bb3, label %bb4

bb3:
  %r109 = icmp eq i32 %r264, 45
  br i1 %r109, label %bb6, label %bb7

bb6:
  %r267 = add i32 1, 0
  br label %bb7

bb7:
  %r265 = phi i32 [ %r263, %bb3 ], [ %r267, %bb6 ]
  %r110 = call i32 @getch()
  %r266 = add i32 %r110, 0
  br label %bb2

bb4:
  br label %bb8

bb8:
  %r268 = phi i32 [ %r260, %bb4 ], [ %r270, %bb9 ]
  %r269 = phi i32 [ %r264, %bb4 ], [ %r271, %bb9 ]
  %r112 = icmp sge i32 %r269, 48
  br i1 %r112, label %bb11, label %bb10

bb11:
  %r114 = icmp sle i32 %r269, 57
  br i1 %r114, label %bb9, label %bb10

bb9:
  %r116 = mul i32 %r268, 10
  %r118 = add i32 %r116, %r269
  %r119 = sub i32 %r118, 48
  %r270 = add i32 %r119, 0
  %r120 = call i32 @getch()
  %r271 = add i32 %r120, 0
  br label %bb8

bb10:
  %r122 = icmp ne i32 %r263, 0
  br i1 %r122, label %bb12, label %bb13

bb12:
  %r124 = sub i32 0, %r268
  ret i32 %r124
bb13:
  ret i32 %r268
}

define void @addedge( i32 %r126, i32 %r128 ) {
bb15:
  %r274 = add i32 0, 0
  %r275 = add i32 %r126, 0
  %r276 = add i32 0, 0
  %r277 = add i32 %r128, 0
  %r130 = load i32, i32* @cnt
  %r131 = getelementptr [5005 x i32 ], [5005 x i32 ]* @to, i32 0, i32 %r130
  store i32 %r277, i32* %r131
  %r133 = load i32, i32* @cnt
  %r134 = getelementptr [5005 x i32 ], [5005 x i32 ]* @next, i32 0, i32 %r133
  %r136 = getelementptr [1005 x i32 ], [1005 x i32 ]* @head, i32 0, i32 %r275
  %r137 = load i32, i32* %r136
  store i32 %r137, i32* %r134
  %r139 = getelementptr [1005 x i32 ], [1005 x i32 ]* @head, i32 0, i32 %r275
  %r140 = load i32, i32* @cnt
  store i32 %r140, i32* %r139
  %r141 = load i32, i32* @cnt
  %r142 = add i32 %r141, 1
  store i32 %r142, i32* @cnt
  %r143 = load i32, i32* @cnt
  %r144 = getelementptr [5005 x i32 ], [5005 x i32 ]* @to, i32 0, i32 %r143
  store i32 %r275, i32* %r144
  %r146 = load i32, i32* @cnt
  %r147 = getelementptr [5005 x i32 ], [5005 x i32 ]* @next, i32 0, i32 %r146
  %r149 = getelementptr [1005 x i32 ], [1005 x i32 ]* @head, i32 0, i32 %r277
  %r150 = load i32, i32* %r149
  store i32 %r150, i32* %r147
  %r152 = getelementptr [1005 x i32 ], [1005 x i32 ]* @head, i32 0, i32 %r277
  %r153 = load i32, i32* @cnt
  store i32 %r153, i32* %r152
  %r154 = load i32, i32* @cnt
  %r155 = add i32 %r154, 1
  store i32 %r155, i32* @cnt
  ret void
}

define void @init( ) {
bb16:
  %r279 = add i32 0, 0
  %r280 = add i32 0, 0
  br label %bb17

bb17:
  %r281 = phi i32 [ %r280, %bb16 ], [ %r282, %bb18 ]
  %r158 = icmp slt i32 %r281, 1005
  br i1 %r158, label %bb18, label %bb19

bb18:
  %r160 = getelementptr [1005 x i32 ], [1005 x i32 ]* @head, i32 0, i32 %r281
  %r161 = sub i32 0, 1
  store i32 %r161, i32* %r160
  %r163 = add i32 %r281, 1
  %r282 = add i32 %r163, 0
  br label %bb17

bb19:
  ret void
}

define void @inqueue( i32 %r164 ) {
bb20:
  %r284 = add i32 0, 0
  %r285 = add i32 %r164, 0
  %r167 = getelementptr [1005 x i32 ], [1005 x i32 ]* @inq, i32 0, i32 %r285
  store i32 1, i32* %r167
  %r168 = load i32, i32* @tail
  %r169 = add i32 %r168, 1
  store i32 %r169, i32* @tail
  %r170 = load i32, i32* @tail
  %r171 = getelementptr [1005 x i32 ], [1005 x i32 ]* @que, i32 0, i32 %r170
  store i32 %r285, i32* %r171
  ret void
}

define i32 @popqueue( ) {
bb21:
  %r173 = load i32, i32* @h
  %r174 = add i32 %r173, 1
  store i32 %r174, i32* @h
  %r287 = add i32 0, 0
  %r176 = load i32, i32* @h
  %r177 = getelementptr [1005 x i32 ], [1005 x i32 ]* @que, i32 0, i32 %r176
  %r178 = load i32, i32* %r177
  %r288 = add i32 %r178, 0
  %r179 = load i32, i32* @h
  %r180 = getelementptr [1005 x i32 ], [1005 x i32 ]* @que, i32 0, i32 %r179
  %r181 = load i32, i32* %r180
  ret i32 %r181
}

define i32 @same( i32 %r182, i32 %r184 ) {
bb22:
  %r295 = add i32 0, 0
  %r296 = add i32 %r182, 0
  %r297 = add i32 0, 0
  %r298 = add i32 %r184, 0
  store i32 0, i32* @h
  store i32 0, i32* @tail
  call void @inqueue(i32 %r296)
  %r299 = add i32 0, 0
  %r300 = add i32 0, 0
  %r301 = add i32 0, 0
  %r302 = add i32 0, 0
  %r303 = add i32 0, 0
  %r304 = add i32 0, 0
  %r305 = add i32 0, 0
  %r306 = add i32 0, 0
  br label %bb23

bb23:
  %r307 = phi i32 [ %r300, %bb22 ], [ %r313, %bb30 ]
  %r191 = load i32, i32* @h
  %r192 = load i32, i32* @tail
  %r193 = icmp slt i32 %r191, %r192
  br i1 %r193, label %bb24, label %bb25

bb24:
  %r194 = call i32 @popqueue()
  %r312 = add i32 %r194, 0
  %r197 = icmp eq i32 %r312, %r298
  br i1 %r197, label %bb26, label %bb27

bb26:
  %r318 = add i32 1, 0
  br label %bb27

bb27:
  %r313 = phi i32 [ %r307, %bb24 ], [ %r318, %bb26 ]
  %r199 = getelementptr [1005 x i32 ], [1005 x i32 ]* @head, i32 0, i32 %r312
  %r200 = load i32, i32* %r199
  %r314 = add i32 %r200, 0
  br label %bb28

bb28:
  %r315 = phi i32 [ %r314, %bb27 ], [ %r317, %bb32 ]
  %r202 = sub i32 0, 1
  %r203 = icmp ne i32 %r315, %r202
  br i1 %r203, label %bb29, label %bb30

bb29:
  %r205 = getelementptr [5005 x i32 ], [5005 x i32 ]* @to, i32 0, i32 %r315
  %r206 = load i32, i32* %r205
  %r316 = add i32 %r206, 0
  %r208 = getelementptr [1005 x i32 ], [1005 x i32 ]* @inq, i32 0, i32 %r316
  %r209 = load i32, i32* %r208
  %r210 = icmp eq i32 %r209, 0
  br i1 %r210, label %bb31, label %bb32

bb31:
  %r212 = getelementptr [5005 x i32 ], [5005 x i32 ]* @to, i32 0, i32 %r315
  %r213 = load i32, i32* %r212
  call void @inqueue(i32 %r213)
  br label %bb32

bb32:
  %r215 = getelementptr [5005 x i32 ], [5005 x i32 ]* @next, i32 0, i32 %r315
  %r216 = load i32, i32* %r215
  %r317 = add i32 %r216, 0
  br label %bb28

bb30:
  br label %bb23

bb25:
  %r308 = add i32 0, 0
  br label %bb33

bb33:
  %r309 = phi i32 [ %r308, %bb25 ], [ %r311, %bb34 ]
  %r218 = load i32, i32* @tail
  %r219 = icmp sle i32 %r309, %r218
  br i1 %r219, label %bb34, label %bb35

bb34:
  %r221 = getelementptr [1005 x i32 ], [1005 x i32 ]* @que, i32 0, i32 %r309
  %r222 = load i32, i32* %r221
  %r310 = add i32 %r222, 0
  %r224 = getelementptr [1005 x i32 ], [1005 x i32 ]* @inq, i32 0, i32 %r310
  store i32 0, i32* %r224
  %r226 = add i32 %r309, 1
  %r311 = add i32 %r226, 0
  br label %bb33

bb35:
  ret i32 %r307
}

define i32 @main( ) {
bb36:
  %r228 = call i32 @quickread()
  store i32 %r228, i32* @n
  %r229 = call i32 @quickread()
  store i32 %r229, i32* @m
  call void @_sysy_starttime(i32 97)
  call void @init()
  %r322 = add i32 0, 0
  %r323 = add i32 0, 0
  %r324 = add i32 0, 0
  %r325 = add i32 0, 0
  %r326 = add i32 0, 0
  %r327 = add i32 0, 0
  br label %bb37

bb37:
  %r233 = load i32, i32* @m
  %r234 = icmp ne i32 %r233, 0
  br i1 %r234, label %bb38, label %bb39

bb38:
  %r235 = call i32 @getch()
  %r328 = add i32 %r235, 0
  br label %bb40

bb40:
  %r329 = phi i32 [ %r328, %bb38 ], [ %r334, %bb41 ]
  %r237 = icmp ne i32 %r329, 81
  br i1 %r237, label %bb43, label %bb42

bb43:
  %r239 = icmp ne i32 %r329, 85
  br i1 %r239, label %bb41, label %bb42

bb41:
  %r240 = call i32 @getch()
  %r334 = add i32 %r240, 0
  br label %bb40

bb42:
  %r242 = icmp eq i32 %r329, 81
  br i1 %r242, label %bb44, label %bb45

bb44:
  %r243 = call i32 @quickread()
  %r332 = add i32 %r243, 0
  %r244 = call i32 @quickread()
  %r333 = add i32 %r244, 0
  %r247 = call i32 @same(i32 %r332, i32 %r333)
  call void @putint(i32 %r247)
  call void @putch(i32 10)
  br label %bb46

bb45:
  %r248 = call i32 @quickread()
  %r330 = add i32 %r248, 0
  %r249 = call i32 @quickread()
  %r331 = add i32 %r249, 0
  call void @addedge(i32 %r330, i32 %r331)
  br label %bb46

bb46:
  %r252 = load i32, i32* @m
  %r253 = sub i32 %r252, 1
  store i32 %r253, i32* @m
  br label %bb37

bb39:
  call void @_sysy_stoptime(i32 117)
  ret i32 0
}

