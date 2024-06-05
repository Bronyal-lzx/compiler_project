declare i32 @getch( )
declare i32 @getint( )
declare void @putch( i32 )
declare void @putint( i32 )
declare void @putarray( i32, i32* )
declare void @_sysy_starttime( i32 )
declare void @_sysy_stoptime( i32 )
define i32 @uniquePaths( i32 %r100, i32 %r102 ) {
bb1:
  %r190 = add i32 0, 0
  %r191 = add i32 0, 0
  %r192 = add i32 0, 0
  %r193 = add i32 0, 0
  %r194 = add i32 0, 0
  %r108 = alloca [ 9 x i32 ]
  %r195 = add i32 0, 0
  %r196 = add i32 %r100, 0
  %r197 = add i32 0, 0
  %r198 = add i32 %r102, 0
  %r105 = icmp eq i32 %r196, 1
  br i1 %r105, label %bb2, label %bb4

bb4:
  %r107 = icmp eq i32 %r198, 1
  br i1 %r107, label %bb2, label %bb3

bb2:
  ret i32 1
bb3:
  %r199 = add i32 0, 0
  br label %bb5

bb5:
  %r200 = phi i32 [ %r199, %bb3 ], [ %r215, %bb6 ]
  %r116 = icmp slt i32 %r200, %r196
  br i1 %r116, label %bb6, label %bb7

bb6:
  %r118 = mul i32 %r200, 3
  %r120 = add i32 %r118, %r198
  %r121 = sub i32 %r120, 1
  %r214 = add i32 %r121, 0
  %r123 = getelementptr [9 x i32 ], [9 x i32 ]* %r108, i32 0, i32 %r214
  store i32 1, i32* %r123
  %r125 = add i32 %r200, 1
  %r215 = add i32 %r125, 0
  br label %bb5

bb7:
  %r201 = add i32 0, 0
  br label %bb8

bb8:
  %r202 = phi i32 [ %r201, %bb7 ], [ %r213, %bb9 ]
  %r128 = icmp slt i32 %r202, %r198
  br i1 %r128, label %bb9, label %bb10

bb9:
  %r130 = sub i32 %r196, 1
  %r131 = mul i32 %r130, 3
  %r133 = add i32 %r131, %r202
  %r212 = add i32 %r133, 0
  %r135 = getelementptr [9 x i32 ], [9 x i32 ]* %r108, i32 0, i32 %r212
  store i32 1, i32* %r135
  %r137 = add i32 %r202, 1
  %r213 = add i32 %r137, 0
  br label %bb8

bb10:
  %r139 = sub i32 %r196, 2
  %r203 = add i32 %r139, 0
  br label %bb11

bb11:
  %r204 = phi i32 [ %r203, %bb10 ], [ %r207, %bb16 ]
  %r141 = sub i32 0, 1
  %r142 = icmp sgt i32 %r204, %r141
  br i1 %r142, label %bb12, label %bb13

bb12:
  %r144 = sub i32 %r198, 2
  %r205 = add i32 %r144, 0
  br label %bb14

bb14:
  %r206 = phi i32 [ %r205, %bb12 ], [ %r211, %bb15 ]
  %r146 = sub i32 0, 1
  %r147 = icmp sgt i32 %r206, %r146
  br i1 %r147, label %bb15, label %bb16

bb15:
  %r149 = mul i32 %r204, 3
  %r151 = add i32 %r149, %r206
  %r208 = add i32 %r151, 0
  %r153 = add i32 %r204, 1
  %r154 = mul i32 %r153, 3
  %r156 = add i32 %r154, %r206
  %r209 = add i32 %r156, 0
  %r158 = mul i32 %r204, 3
  %r160 = add i32 %r158, %r206
  %r161 = add i32 %r160, 1
  %r210 = add i32 %r161, 0
  %r163 = getelementptr [9 x i32 ], [9 x i32 ]* %r108, i32 0, i32 %r208
  %r165 = getelementptr [9 x i32 ], [9 x i32 ]* %r108, i32 0, i32 %r209
  %r166 = load i32, i32* %r165
  %r168 = getelementptr [9 x i32 ], [9 x i32 ]* %r108, i32 0, i32 %r210
  %r169 = load i32, i32* %r168
  %r170 = add i32 %r166, %r169
  store i32 %r170, i32* %r163
  %r172 = sub i32 %r206, 1
  %r211 = add i32 %r172, 0
  br label %bb14

bb16:
  %r174 = sub i32 %r204, 1
  %r207 = add i32 %r174, 0
  br label %bb11

bb13:
  %r175 = getelementptr [9 x i32 ], [9 x i32 ]* %r108, i32 0, i32 0
  %r176 = load i32, i32* %r175
  ret i32 %r176
}

define i32 @main( ) {
bb17:
  call void @_sysy_starttime(i32 40)
  %r218 = add i32 0, 0
  %r219 = add i32 0, 0
  %r220 = add i32 3, 0
  %r181 = call i32 @uniquePaths(i32 %r220, i32 %r220)
  %r221 = add i32 %r181, 0
  call void @_sysy_stoptime(i32 45)
  ret i32 %r221
}

