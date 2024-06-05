declare i32 @getch( )
declare i32 @getint( )
declare void @putch( i32 )
declare void @putint( i32 )
declare void @putarray( i32, i32* )
declare void @_sysy_starttime( i32 )
declare void @_sysy_stoptime( i32 )
@TOKEN_NUM = global i32 0
@TOKEN_OTHER = global i32 1
@last_char = global i32 32
@num = global i32 0
@other = global i32 0
@cur_token = global i32 0
define i32 @next_char( ) {
bb1:
  %r100 = call i32 @getch()
  store i32 %r100, i32* @last_char
  %r101 = load i32, i32* @last_char
  ret i32 %r101
}

define i32 @is_space( i32 %r102 ) {
bb2:
  %r293 = add i32 0, 0
  %r294 = add i32 %r102, 0
  %r105 = icmp eq i32 %r294, 32
  br i1 %r105, label %bb3, label %bb6

bb6:
  %r107 = icmp eq i32 %r294, 10
  br i1 %r107, label %bb3, label %bb4

bb3:
  ret i32 1
bb4:
  ret i32 0
}

define i32 @is_num( i32 %r108 ) {
bb7:
  %r296 = add i32 0, 0
  %r297 = add i32 %r108, 0
  %r111 = icmp sge i32 %r297, 48
  br i1 %r111, label %bb11, label %bb9

bb11:
  %r113 = icmp sle i32 %r297, 57
  br i1 %r113, label %bb8, label %bb9

bb8:
  ret i32 1
bb9:
  ret i32 0
}

define i32 @next_token( ) {
bb12:
  br label %bb13

bb13:
  %r114 = load i32, i32* @last_char
  %r115 = call i32 @is_space(i32 %r114)
  %r116 = icmp ne i32 %r115, 0
  br i1 %r116, label %bb14, label %bb15

bb14:
  call void @next_char()
  br label %bb13

bb15:
  %r117 = load i32, i32* @last_char
  %r118 = call i32 @is_num(i32 %r117)
  %r119 = icmp ne i32 %r118, 0
  br i1 %r119, label %bb16, label %bb17

bb16:
  %r120 = load i32, i32* @last_char
  %r121 = sub i32 %r120, 48
  store i32 %r121, i32* @num
  br label %bb19

bb19:
  %r122 = call i32 @next_char()
  %r123 = call i32 @is_num(i32 %r122)
  %r124 = icmp ne i32 %r123, 0
  br i1 %r124, label %bb20, label %bb21

bb20:
  %r125 = load i32, i32* @num
  %r126 = mul i32 %r125, 10
  %r127 = load i32, i32* @last_char
  %r128 = add i32 %r126, %r127
  %r129 = sub i32 %r128, 48
  store i32 %r129, i32* @num
  br label %bb19

bb21:
  %r130 = load i32, i32* @TOKEN_NUM
  store i32 %r130, i32* @cur_token
  br label %bb18

bb17:
  %r131 = load i32, i32* @last_char
  store i32 %r131, i32* @other
  call void @next_char()
  %r132 = load i32, i32* @TOKEN_OTHER
  store i32 %r132, i32* @cur_token
  br label %bb18

bb18:
  %r133 = load i32, i32* @cur_token
  ret i32 %r133
}

define i32 @panic( ) {
bb22:
  call void @putch(i32 112)
  call void @putch(i32 97)
  call void @putch(i32 110)
  call void @putch(i32 105)
  call void @putch(i32 99)
  call void @putch(i32 33)
  call void @putch(i32 10)
  %r134 = sub i32 0, 1
  ret i32 %r134
}

define i32 @get_op_prec( i32 %r135 ) {
bb23:
  %r299 = add i32 0, 0
  %r300 = add i32 %r135, 0
  %r138 = icmp eq i32 %r300, 43
  br i1 %r138, label %bb24, label %bb26

bb26:
  %r140 = icmp eq i32 %r300, 45
  br i1 %r140, label %bb24, label %bb25

bb24:
  ret i32 10
bb25:
  %r142 = icmp eq i32 %r300, 42
  br i1 %r142, label %bb27, label %bb30

bb30:
  %r144 = icmp eq i32 %r300, 47
  br i1 %r144, label %bb27, label %bb29

bb29:
  %r146 = icmp eq i32 %r300, 37
  br i1 %r146, label %bb27, label %bb28

bb27:
  ret i32 20
bb28:
  ret i32 0
}

define void @stack_push( i32* %r147, i32 %r148 ) {
bb31:
  %r303 = add i32 0, 0
  %r304 = add i32 %r148, 0
  %r150 = getelementptr [256 x i32 ], [256 x i32 ]* %r147, i32 0, i32 0
  %r151 = getelementptr [256 x i32 ], [256 x i32 ]* %r147, i32 0, i32 0
  %r152 = load i32, i32* %r151
  %r153 = add i32 %r152, 1
  store i32 %r153, i32* %r150
  %r305 = add i32 0, 0
  %r155 = getelementptr [256 x i32 ], [256 x i32 ]* %r147, i32 0, i32 0
  %r156 = load i32, i32* %r155
  %r306 = add i32 %r156, 0
  %r158 = getelementptr [256 x i32 ], [256 x i32 ]* %r147, i32 0, i32 %r306
  store i32 %r304, i32* %r158
  ret void
}

define i32 @stack_pop( i32* %r160 ) {
bb32:
  %r309 = add i32 0, 0
  %r162 = getelementptr [256 x i32 ], [256 x i32 ]* %r160, i32 0, i32 0
  %r163 = load i32, i32* %r162
  %r310 = add i32 %r163, 0
  %r311 = add i32 0, 0
  %r166 = getelementptr [256 x i32 ], [256 x i32 ]* %r160, i32 0, i32 %r310
  %r167 = load i32, i32* %r166
  %r312 = add i32 %r167, 0
  %r168 = getelementptr [256 x i32 ], [256 x i32 ]* %r160, i32 0, i32 0
  %r169 = getelementptr [256 x i32 ], [256 x i32 ]* %r160, i32 0, i32 0
  %r170 = load i32, i32* %r169
  %r171 = sub i32 %r170, 1
  store i32 %r171, i32* %r168
  ret i32 %r312
}

define i32 @stack_peek( i32* %r173 ) {
bb33:
  %r314 = add i32 0, 0
  %r175 = getelementptr [256 x i32 ], [256 x i32 ]* %r173, i32 0, i32 0
  %r176 = load i32, i32* %r175
  %r315 = add i32 %r176, 0
  %r178 = getelementptr [256 x i32 ], [256 x i32 ]* %r173, i32 0, i32 %r315
  %r179 = load i32, i32* %r178
  ret i32 %r179
}

define i32 @stack_size( i32* %r180 ) {
bb34:
  %r181 = getelementptr [256 x i32 ], [256 x i32 ]* %r180, i32 0, i32 0
  %r182 = load i32, i32* %r181
  ret i32 %r182
}

define i32 @mod( i32 %r183, i32 %r185 ) {
bb35:
  %r318 = add i32 0, 0
  %r319 = add i32 %r183, 0
  %r320 = add i32 0, 0
  %r321 = add i32 %r185, 0
  %r190 = sdiv i32 %r319, %r321
  %r192 = mul i32 %r190, %r321
  %r193 = sub i32 %r319, %r192
  ret i32 %r193
}

define i32 @eval_op( i32 %r194, i32 %r196, i32 %r198 ) {
bb36:
  %r325 = add i32 0, 0
  %r326 = add i32 %r194, 0
  %r327 = add i32 0, 0
  %r328 = add i32 %r196, 0
  %r329 = add i32 0, 0
  %r330 = add i32 %r198, 0
  %r201 = icmp eq i32 %r326, 43
  br i1 %r201, label %bb37, label %bb38

bb37:
  %r204 = add i32 %r328, %r330
  ret i32 %r204
bb38:
  %r206 = icmp eq i32 %r326, 45
  br i1 %r206, label %bb39, label %bb40

bb39:
  %r209 = sub i32 %r328, %r330
  ret i32 %r209
bb40:
  %r211 = icmp eq i32 %r326, 42
  br i1 %r211, label %bb41, label %bb42

bb41:
  %r214 = mul i32 %r328, %r330
  ret i32 %r214
bb42:
  %r216 = icmp eq i32 %r326, 47
  br i1 %r216, label %bb43, label %bb44

bb43:
  %r219 = sdiv i32 %r328, %r330
  ret i32 %r219
bb44:
  %r221 = icmp eq i32 %r326, 37
  br i1 %r221, label %bb45, label %bb46

bb45:
  %r224 = call i32 @mod(i32 %r328, i32 %r330)
  ret i32 %r224
bb46:
  ret i32 0
}

define i32 @eval( ) {
bb47:
  %r339 = add i32 0, 0
  %r340 = add i32 0, 0
  %r341 = add i32 0, 0
  %r342 = add i32 0, 0
  %r343 = add i32 0, 0
  %r344 = add i32 0, 0
  %r345 = add i32 0, 0
  %r225 = alloca [ 256 x i32 ]
  %r226 = alloca [ 256 x i32 ]
  %r346 = add i32 0, 0
  %r347 = add i32 0, 0
  br label %bb48

bb48:
  %r348 = phi i32 [ %r347, %bb47 ], [ %r356, %bb49 ]
  %r229 = icmp slt i32 %r348, 256
  br i1 %r229, label %bb49, label %bb50

bb49:
  %r231 = getelementptr [256 x i32 ], [256 x i32 ]* %r225, i32 0, i32 %r348
  store i32 0, i32* %r231
  %r233 = getelementptr [256 x i32 ], [256 x i32 ]* %r226, i32 0, i32 %r348
  store i32 0, i32* %r233
  %r235 = add i32 %r348, 1
  %r356 = add i32 %r235, 0
  br label %bb48

bb50:
  %r236 = load i32, i32* @cur_token
  %r237 = load i32, i32* @TOKEN_NUM
  %r238 = icmp ne i32 %r236, %r237
  br i1 %r238, label %bb51, label %bb52

bb51:
  %r239 = call i32 @panic()
  ret i32 %r239
bb52:
  %r240 = load i32, i32* @num
  call void @stack_push(i32* %r225, i32 %r240)
  call void @next_token()
  br label %bb53

bb53:
  %r241 = load i32, i32* @cur_token
  %r242 = load i32, i32* @TOKEN_OTHER
  %r243 = icmp eq i32 %r241, %r242
  br i1 %r243, label %bb54, label %bb55

bb54:
  %r245 = load i32, i32* @other
  %r352 = add i32 %r245, 0
  %r247 = call i32 @get_op_prec(i32 %r352)
  %r248 = icmp eq i32 %r247, 0
  br i1 %r248, label %bb56, label %bb57

bb56:
  br label %bb55

bb57:
  call void @next_token()
  br label %bb58

bb58:
  %r249 = call i32 @stack_size(i32* %r226)
  %r250 = icmp ne i32 %r249, 0
  br i1 %r250, label %bb61, label %bb60

bb61:
  %r251 = call i32 @stack_peek(i32* %r226)
  %r252 = call i32 @get_op_prec(i32 %r251)
  %r254 = call i32 @get_op_prec(i32 %r352)
  %r255 = icmp sge i32 %r252, %r254
  br i1 %r255, label %bb59, label %bb60

bb59:
  %r257 = call i32 @stack_pop(i32* %r226)
  %r353 = add i32 %r257, 0
  %r259 = call i32 @stack_pop(i32* %r225)
  %r354 = add i32 %r259, 0
  %r261 = call i32 @stack_pop(i32* %r225)
  %r355 = add i32 %r261, 0
  %r265 = call i32 @eval_op(i32 %r353, i32 %r355, i32 %r354)
  call void @stack_push(i32* %r225, i32 %r265)
  br label %bb58

bb60:
  call void @stack_push(i32* %r226, i32 %r352)
  %r267 = load i32, i32* @cur_token
  %r268 = load i32, i32* @TOKEN_NUM
  %r269 = icmp ne i32 %r267, %r268
  br i1 %r269, label %bb62, label %bb63

bb62:
  %r270 = call i32 @panic()
  ret i32 %r270
bb63:
  %r271 = load i32, i32* @num
  call void @stack_push(i32* %r225, i32 %r271)
  call void @next_token()
  br label %bb53

bb55:
  call void @next_token()
  br label %bb64

bb64:
  %r272 = call i32 @stack_size(i32* %r226)
  %r273 = icmp ne i32 %r272, 0
  br i1 %r273, label %bb65, label %bb66

bb65:
  %r275 = call i32 @stack_pop(i32* %r226)
  %r349 = add i32 %r275, 0
  %r277 = call i32 @stack_pop(i32* %r225)
  %r350 = add i32 %r277, 0
  %r279 = call i32 @stack_pop(i32* %r225)
  %r351 = add i32 %r279, 0
  %r283 = call i32 @eval_op(i32 %r349, i32 %r351, i32 %r350)
  call void @stack_push(i32* %r225, i32 %r283)
  br label %bb64

bb66:
  %r284 = call i32 @stack_peek(i32* %r225)
  ret i32 %r284
}

define i32 @main( ) {
bb67:
  call void @_sysy_starttime(i32 205)
  %r358 = add i32 0, 0
  %r286 = call i32 @getint()
  %r359 = add i32 %r286, 0
  call void @getch()
  call void @next_token()
  br label %bb68

bb68:
  %r360 = phi i32 [ %r359, %bb67 ], [ %r361, %bb69 ]
  %r288 = icmp ne i32 %r360, 0
  br i1 %r288, label %bb69, label %bb70

bb69:
  %r289 = call i32 @eval()
  call void @putint(i32 %r289)
  call void @putch(i32 10)
  %r291 = sub i32 %r360, 1
  %r361 = add i32 %r291, 0
  br label %bb68

bb70:
  call void @_sysy_stoptime(i32 214)
  ret i32 0
}

