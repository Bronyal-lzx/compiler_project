declare i32 @getch( )
declare i32 @getint( )
declare void @putch( i32 )
declare void @putint( i32 )
declare void @putarray( i32, i32* )
declare void @_sysy_starttime( i32 )
declare void @_sysy_stoptime( i32 )
define i32 @canJump( i32* %r100, i32 %r101 ) {
bb1:
  %r183 = add i32 0, 0
  %r184 = add i32 0, 0
  %r185 = add i32 0, 0
  %r110 = alloca [ 10 x i32 ]
  %r186 = add i32 0, 0
  %r187 = add i32 %r101, 0
  %r104 = icmp eq i32 %r187, 1
  br i1 %r104, label %bb2, label %bb3

bb2:
  ret i32 1
bb3:
  %r105 = getelementptr [10 x i32 ], [10 x i32 ]* %r100, i32 0, i32 0
  %r106 = load i32, i32* %r105
  %r108 = sub i32 %r187, 2
  %r109 = icmp sgt i32 %r106, %r108
  br i1 %r109, label %bb4, label %bb5

bb4:
  ret i32 1
bb5:
  %r188 = add i32 0, 0
  br label %bb6

bb6:
  %r189 = phi i32 [ %r188, %bb5 ], [ %r200, %bb7 ]
  %r114 = sub i32 %r187, 1
  %r115 = icmp slt i32 %r189, %r114
  br i1 %r115, label %bb7, label %bb8

bb7:
  %r117 = getelementptr [10 x i32 ], [10 x i32 ]* %r110, i32 0, i32 %r189
  store i32 0, i32* %r117
  %r119 = add i32 %r189, 1
  %r200 = add i32 %r119, 0
  br label %bb6

bb8:
  %r122 = sub i32 %r187, 1
  %r190 = add i32 %r122, 0
  %r124 = getelementptr [10 x i32 ], [10 x i32 ]* %r110, i32 0, i32 %r190
  store i32 1, i32* %r124
  %r126 = sub i32 %r187, 2
  %r191 = add i32 %r126, 0
  br label %bb9

bb9:
  %r192 = phi i32 [ %r191, %bb8 ], [ %r195, %bb17 ]
  %r128 = sub i32 0, 1
  %r129 = icmp sgt i32 %r192, %r128
  br i1 %r129, label %bb10, label %bb11

bb10:
  %r132 = getelementptr [10 x i32 ], [10 x i32 ]* %r100, i32 0, i32 %r192
  %r133 = load i32, i32* %r132
  %r135 = sub i32 %r187, 1
  %r137 = sub i32 %r135, %r192
  %r138 = icmp slt i32 %r133, %r137
  br i1 %r138, label %bb12, label %bb13

bb12:
  %r140 = getelementptr [10 x i32 ], [10 x i32 ]* %r100, i32 0, i32 %r192
  %r141 = load i32, i32* %r140
  %r199 = add i32 %r141, 0
  br label %bb14

bb13:
  %r143 = sub i32 %r187, 1
  %r145 = sub i32 %r143, %r192
  %r198 = add i32 %r145, 0
  br label %bb14

bb14:
  %r193 = phi i32 [ %r199, %bb12 ], [ %r198, %bb13 ]
  br label %bb15

bb15:
  %r194 = phi i32 [ %r193, %bb14 ], [ %r197, %bb19 ]
  %r147 = sub i32 0, 1
  %r148 = icmp sgt i32 %r194, %r147
  br i1 %r148, label %bb16, label %bb17

bb16:
  %r151 = add i32 %r192, %r194
  %r196 = add i32 %r151, 0
  %r153 = getelementptr [10 x i32 ], [10 x i32 ]* %r110, i32 0, i32 %r196
  %r154 = load i32, i32* %r153
  %r155 = icmp ne i32 %r154, 0
  br i1 %r155, label %bb18, label %bb19

bb18:
  %r157 = getelementptr [10 x i32 ], [10 x i32 ]* %r110, i32 0, i32 %r192
  store i32 1, i32* %r157
  br label %bb19

bb19:
  %r159 = sub i32 %r194, 1
  %r197 = add i32 %r159, 0
  br label %bb15

bb17:
  %r161 = sub i32 %r192, 1
  %r195 = add i32 %r161, 0
  br label %bb9

bb11:
  %r162 = getelementptr [10 x i32 ], [10 x i32 ]* %r110, i32 0, i32 0
  %r163 = load i32, i32* %r162
  ret i32 %r163
}

define i32 @main( ) {
bb20:
  call void @_sysy_starttime(i32 42)
  %r202 = add i32 0, 0
  %r165 = alloca [ 10 x i32 ]
  %r166 = getelementptr [10 x i32 ], [10 x i32 ]* %r165, i32 0, i32 0
  store i32 3, i32* %r166
  %r167 = getelementptr [10 x i32 ], [10 x i32 ]* %r165, i32 0, i32 1
  store i32 3, i32* %r167
  %r168 = getelementptr [10 x i32 ], [10 x i32 ]* %r165, i32 0, i32 2
  store i32 9, i32* %r168
  %r169 = getelementptr [10 x i32 ], [10 x i32 ]* %r165, i32 0, i32 3
  store i32 0, i32* %r169
  %r170 = getelementptr [10 x i32 ], [10 x i32 ]* %r165, i32 0, i32 4
  store i32 0, i32* %r170
  %r171 = getelementptr [10 x i32 ], [10 x i32 ]* %r165, i32 0, i32 5
  store i32 1, i32* %r171
  %r172 = getelementptr [10 x i32 ], [10 x i32 ]* %r165, i32 0, i32 6
  store i32 1, i32* %r172
  %r173 = getelementptr [10 x i32 ], [10 x i32 ]* %r165, i32 0, i32 7
  store i32 5, i32* %r173
  %r174 = getelementptr [10 x i32 ], [10 x i32 ]* %r165, i32 0, i32 8
  store i32 7, i32* %r174
  %r175 = getelementptr [10 x i32 ], [10 x i32 ]* %r165, i32 0, i32 9
  store i32 8, i32* %r175
  %r203 = add i32 10, 0
  %r177 = call i32 @canJump(i32* %r165, i32 %r203)
  %r204 = add i32 %r177, 0
  call void @_sysy_stoptime(i32 49)
  ret i32 %r204
}

