declare i32 @getch( )
declare i32 @getint( )
declare void @putch( i32 )
declare void @putint( i32 )
declare void @putarray( i32, i32* )
declare void @_sysy_starttime( i32 )
declare void @_sysy_stoptime( i32 )
@len = global i32 20
define i32 @main( ) {
bb1:
  %r261 = add i32 0, 0
  call void @_sysy_starttime(i32 97)
  %r262 = add i32 0, 0
  %r263 = add i32 0, 0
  %r264 = add i32 0, 0
  %r265 = add i32 0, 0
  %r266 = add i32 0, 0
  %r105 = alloca [ 20 x i32 ]
  %r106 = getelementptr [20 x i32 ], [20 x i32 ]* %r105, i32 0, i32 0
  store i32 1, i32* %r106
  %r107 = getelementptr [20 x i32 ], [20 x i32 ]* %r105, i32 0, i32 1
  store i32 2, i32* %r107
  %r108 = getelementptr [20 x i32 ], [20 x i32 ]* %r105, i32 0, i32 2
  store i32 3, i32* %r108
  %r109 = getelementptr [20 x i32 ], [20 x i32 ]* %r105, i32 0, i32 3
  store i32 4, i32* %r109
  %r110 = getelementptr [20 x i32 ], [20 x i32 ]* %r105, i32 0, i32 4
  store i32 5, i32* %r110
  %r111 = getelementptr [20 x i32 ], [20 x i32 ]* %r105, i32 0, i32 5
  store i32 6, i32* %r111
  %r112 = getelementptr [20 x i32 ], [20 x i32 ]* %r105, i32 0, i32 6
  store i32 7, i32* %r112
  %r113 = getelementptr [20 x i32 ], [20 x i32 ]* %r105, i32 0, i32 7
  store i32 8, i32* %r113
  %r114 = getelementptr [20 x i32 ], [20 x i32 ]* %r105, i32 0, i32 8
  store i32 9, i32* %r114
  %r115 = getelementptr [20 x i32 ], [20 x i32 ]* %r105, i32 0, i32 9
  store i32 0, i32* %r115
  %r116 = getelementptr [20 x i32 ], [20 x i32 ]* %r105, i32 0, i32 10
  store i32 1, i32* %r116
  %r117 = getelementptr [20 x i32 ], [20 x i32 ]* %r105, i32 0, i32 11
  store i32 2, i32* %r117
  %r118 = getelementptr [20 x i32 ], [20 x i32 ]* %r105, i32 0, i32 12
  store i32 3, i32* %r118
  %r119 = getelementptr [20 x i32 ], [20 x i32 ]* %r105, i32 0, i32 13
  store i32 4, i32* %r119
  %r120 = getelementptr [20 x i32 ], [20 x i32 ]* %r105, i32 0, i32 14
  store i32 5, i32* %r120
  %r121 = getelementptr [20 x i32 ], [20 x i32 ]* %r105, i32 0, i32 15
  store i32 6, i32* %r121
  %r122 = getelementptr [20 x i32 ], [20 x i32 ]* %r105, i32 0, i32 16
  store i32 7, i32* %r122
  %r123 = getelementptr [20 x i32 ], [20 x i32 ]* %r105, i32 0, i32 17
  store i32 8, i32* %r123
  %r124 = getelementptr [20 x i32 ], [20 x i32 ]* %r105, i32 0, i32 18
  store i32 9, i32* %r124
  %r125 = getelementptr [20 x i32 ], [20 x i32 ]* %r105, i32 0, i32 19
  store i32 0, i32* %r125
  %r126 = alloca [ 20 x i32 ]
  %r127 = getelementptr [20 x i32 ], [20 x i32 ]* %r126, i32 0, i32 0
  store i32 2, i32* %r127
  %r128 = getelementptr [20 x i32 ], [20 x i32 ]* %r126, i32 0, i32 1
  store i32 3, i32* %r128
  %r129 = getelementptr [20 x i32 ], [20 x i32 ]* %r126, i32 0, i32 2
  store i32 4, i32* %r129
  %r130 = getelementptr [20 x i32 ], [20 x i32 ]* %r126, i32 0, i32 3
  store i32 2, i32* %r130
  %r131 = getelementptr [20 x i32 ], [20 x i32 ]* %r126, i32 0, i32 4
  store i32 5, i32* %r131
  %r132 = getelementptr [20 x i32 ], [20 x i32 ]* %r126, i32 0, i32 5
  store i32 7, i32* %r132
  %r133 = getelementptr [20 x i32 ], [20 x i32 ]* %r126, i32 0, i32 6
  store i32 9, i32* %r133
  %r134 = getelementptr [20 x i32 ], [20 x i32 ]* %r126, i32 0, i32 7
  store i32 9, i32* %r134
  %r135 = getelementptr [20 x i32 ], [20 x i32 ]* %r126, i32 0, i32 8
  store i32 0, i32* %r135
  %r136 = getelementptr [20 x i32 ], [20 x i32 ]* %r126, i32 0, i32 9
  store i32 1, i32* %r136
  %r137 = getelementptr [20 x i32 ], [20 x i32 ]* %r126, i32 0, i32 10
  store i32 9, i32* %r137
  %r138 = getelementptr [20 x i32 ], [20 x i32 ]* %r126, i32 0, i32 11
  store i32 8, i32* %r138
  %r139 = getelementptr [20 x i32 ], [20 x i32 ]* %r126, i32 0, i32 12
  store i32 7, i32* %r139
  %r140 = getelementptr [20 x i32 ], [20 x i32 ]* %r126, i32 0, i32 13
  store i32 6, i32* %r140
  %r141 = getelementptr [20 x i32 ], [20 x i32 ]* %r126, i32 0, i32 14
  store i32 4, i32* %r141
  %r142 = getelementptr [20 x i32 ], [20 x i32 ]* %r126, i32 0, i32 15
  store i32 3, i32* %r142
  %r143 = getelementptr [20 x i32 ], [20 x i32 ]* %r126, i32 0, i32 16
  store i32 2, i32* %r143
  %r144 = getelementptr [20 x i32 ], [20 x i32 ]* %r126, i32 0, i32 17
  store i32 1, i32* %r144
  %r145 = getelementptr [20 x i32 ], [20 x i32 ]* %r126, i32 0, i32 18
  store i32 2, i32* %r145
  %r146 = getelementptr [20 x i32 ], [20 x i32 ]* %r126, i32 0, i32 19
  store i32 2, i32* %r146
  %r267 = add i32 0, 0
  %r148 = load i32, i32* @len
  %r268 = add i32 %r148, 0
  %r269 = add i32 0, 0
  %r150 = load i32, i32* @len
  %r270 = add i32 %r150, 0
  %r151 = alloca [ 25 x i32 ]
  %r152 = alloca [ 25 x i32 ]
  %r153 = alloca [ 40 x i32 ]
  %r154 = getelementptr [40 x i32 ], [40 x i32 ]* %r153, i32 0, i32 0
  store i32 0, i32* %r154
  %r271 = add i32 0, 0
  br label %bb2

bb2:
  %r272 = phi i32 [ %r271, %bb1 ], [ %r297, %bb3 ]
  %r157 = icmp slt i32 %r272, %r268
  br i1 %r157, label %bb3, label %bb4

bb3:
  %r159 = getelementptr [25 x i32 ], [25 x i32 ]* %r151, i32 0, i32 %r272
  %r161 = getelementptr [20 x i32 ], [20 x i32 ]* %r105, i32 0, i32 %r272
  %r162 = load i32, i32* %r161
  store i32 %r162, i32* %r159
  %r164 = add i32 %r272, 1
  %r297 = add i32 %r164, 0
  br label %bb2

bb4:
  %r273 = add i32 0, 0
  br label %bb5

bb5:
  %r274 = phi i32 [ %r273, %bb4 ], [ %r296, %bb6 ]
  %r167 = icmp slt i32 %r274, %r270
  br i1 %r167, label %bb6, label %bb7

bb6:
  %r169 = getelementptr [25 x i32 ], [25 x i32 ]* %r152, i32 0, i32 %r274
  %r171 = getelementptr [20 x i32 ], [20 x i32 ]* %r126, i32 0, i32 %r274
  %r172 = load i32, i32* %r171
  store i32 %r172, i32* %r169
  %r174 = add i32 %r274, 1
  %r296 = add i32 %r174, 0
  br label %bb5

bb7:
  %r177 = add i32 %r268, %r270
  %r178 = sub i32 %r177, 1
  %r275 = add i32 %r178, 0
  %r276 = add i32 0, 0
  br label %bb8

bb8:
  %r277 = phi i32 [ %r276, %bb7 ], [ %r295, %bb9 ]
  %r181 = icmp sle i32 %r277, %r275
  br i1 %r181, label %bb9, label %bb10

bb9:
  %r183 = getelementptr [40 x i32 ], [40 x i32 ]* %r153, i32 0, i32 %r277
  store i32 0, i32* %r183
  %r185 = add i32 %r277, 1
  %r295 = add i32 %r185, 0
  br label %bb8

bb10:
  %r278 = add i32 0, 0
  %r187 = sub i32 %r270, 1
  %r279 = add i32 %r187, 0
  br label %bb11

bb11:
  %r280 = phi i32 [ %r275, %bb10 ], [ %r289, %bb16 ]
  %r281 = phi i32 [ %r279, %bb10 ], [ %r290, %bb16 ]
  %r189 = sub i32 0, 1
  %r190 = icmp sgt i32 %r281, %r189
  br i1 %r190, label %bb12, label %bb13

bb12:
  %r192 = getelementptr [25 x i32 ], [25 x i32 ]* %r152, i32 0, i32 %r281
  %r193 = load i32, i32* %r192
  %r285 = add i32 %r193, 0
  %r195 = sub i32 %r268, 1
  %r286 = add i32 %r195, 0
  br label %bb14

bb14:
  %r287 = phi i32 [ %r286, %bb12 ], [ %r292, %bb19 ]
  %r288 = phi i32 [ %r280, %bb12 ], [ %r293, %bb19 ]
  %r197 = sub i32 0, 1
  %r198 = icmp sgt i32 %r287, %r197
  br i1 %r198, label %bb15, label %bb16

bb15:
  %r200 = getelementptr [40 x i32 ], [40 x i32 ]* %r153, i32 0, i32 %r288
  %r201 = load i32, i32* %r200
  %r204 = getelementptr [25 x i32 ], [25 x i32 ]* %r151, i32 0, i32 %r287
  %r205 = load i32, i32* %r204
  %r206 = mul i32 %r285, %r205
  %r207 = add i32 %r201, %r206
  %r291 = add i32 %r207, 0
  %r209 = icmp sge i32 %r291, 10
  br i1 %r209, label %bb17, label %bb18

bb17:
  %r211 = getelementptr [40 x i32 ], [40 x i32 ]* %r153, i32 0, i32 %r288
  store i32 %r291, i32* %r211
  %r215 = sub i32 %r288, 1
  %r294 = add i32 %r215, 0
  %r217 = getelementptr [40 x i32 ], [40 x i32 ]* %r153, i32 0, i32 %r294
  %r219 = getelementptr [40 x i32 ], [40 x i32 ]* %r153, i32 0, i32 %r294
  %r220 = load i32, i32* %r219
  %r222 = sdiv i32 %r291, 10
  %r223 = add i32 %r220, %r222
  store i32 %r223, i32* %r217
  br label %bb19

bb18:
  %r225 = getelementptr [40 x i32 ], [40 x i32 ]* %r153, i32 0, i32 %r288
  store i32 %r291, i32* %r225
  br label %bb19

bb19:
  %r228 = sub i32 %r287, 1
  %r292 = add i32 %r228, 0
  %r230 = sub i32 %r288, 1
  %r293 = add i32 %r230, 0
  br label %bb14

bb16:
  %r233 = add i32 %r288, %r268
  %r234 = sub i32 %r233, 1
  %r289 = add i32 %r234, 0
  %r236 = sub i32 %r281, 1
  %r290 = add i32 %r236, 0
  br label %bb11

bb13:
  %r237 = getelementptr [40 x i32 ], [40 x i32 ]* %r153, i32 0, i32 0
  %r238 = load i32, i32* %r237
  %r239 = icmp ne i32 %r238, 0
  br i1 %r239, label %bb20, label %bb21

bb20:
  %r240 = getelementptr [40 x i32 ], [40 x i32 ]* %r153, i32 0, i32 0
  %r241 = load i32, i32* %r240
  call void @putint(i32 %r241)
  br label %bb21

bb21:
  %r282 = add i32 1, 0
  br label %bb22

bb22:
  %r283 = phi i32 [ %r282, %bb21 ], [ %r284, %bb23 ]
  %r245 = add i32 %r268, %r270
  %r246 = sub i32 %r245, 1
  %r247 = icmp sle i32 %r283, %r246
  br i1 %r247, label %bb23, label %bb24

bb23:
  %r249 = getelementptr [40 x i32 ], [40 x i32 ]* %r153, i32 0, i32 %r283
  %r250 = load i32, i32* %r249
  call void @putint(i32 %r250)
  %r252 = add i32 %r283, 1
  %r284 = add i32 %r252, 0
  br label %bb22

bb24:
  call void @_sysy_stoptime(i32 117)
  ret i32 0
}

