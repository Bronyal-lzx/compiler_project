declare i32 @getch( )
declare i32 @getint( )
declare void @putch( i32 )
declare void @putint( i32 )
declare void @putarray( i32, i32* )
declare void @_sysy_starttime( i32 )
declare void @_sysy_stoptime( i32 )
@N = global i32 0
@newline = global i32 0
define i32 @mod( i32 %r100, i32 %r102 ) {
bb1:
  %r145 = add i32 0, 0
  %r146 = add i32 %r100, 0
  %r147 = add i32 0, 0
  %r148 = add i32 %r102, 0
  %r107 = sdiv i32 %r146, %r148
  %r109 = mul i32 %r107, %r148
  %r110 = sub i32 %r146, %r109
  ret i32 %r110
}

define i32 @split( i32 %r111, i32* %r113 ) {
bb2:
  %r151 = add i32 0, 0
  %r152 = add i32 %r111, 0
  %r153 = add i32 0, 0
  %r115 = load i32, i32* @N
  %r116 = sub i32 %r115, 1
  %r154 = add i32 %r116, 0
  br label %bb3

bb3:
  %r155 = phi i32 [ %r152, %bb2 ], [ %r157, %bb4 ]
  %r156 = phi i32 [ %r154, %bb2 ], [ %r158, %bb4 ]
  %r118 = sub i32 0, 1
  %r119 = icmp ne i32 %r156, %r118
  br i1 %r119, label %bb4, label %bb5

bb4:
  %r121 = getelementptr [4 x i32 ], [4 x i32 ]* %r113, i32 0, i32 %r156
  %r123 = call i32 @mod(i32 %r155, i32 10)
  store i32 %r123, i32* %r121
  %r125 = sdiv i32 %r155, 10
  %r157 = add i32 %r125, 0
  %r127 = sub i32 %r156, 1
  %r158 = add i32 %r127, 0
  br label %bb3

bb5:
  ret i32 0
}

define i32 @main( ) {
bb6:
  call void @_sysy_starttime(i32 26)
  store i32 4, i32* @N
  store i32 10, i32* @newline
  %r162 = add i32 0, 0
  %r163 = add i32 0, 0
  %r130 = alloca [ 4 x i32 ]
  %r164 = add i32 1478, 0
  %r132 = call i32 @split(i32 %r164, i32* %r130)
  %r165 = add i32 %r132, 0
  %r166 = add i32 0, 0
  %r167 = add i32 0, 0
  br label %bb7

bb7:
  %r168 = phi i32 [ %r167, %bb6 ], [ %r170, %bb8 ]
  %r135 = icmp slt i32 %r168, 4
  br i1 %r135, label %bb8, label %bb9

bb8:
  %r137 = getelementptr [4 x i32 ], [4 x i32 ]* %r130, i32 0, i32 %r168
  %r138 = load i32, i32* %r137
  %r169 = add i32 %r138, 0
  call void @putint(i32 %r169)
  %r140 = load i32, i32* @newline
  call void @putch(i32 %r140)
  %r142 = add i32 %r168, 1
  %r170 = add i32 %r142, 0
  br label %bb7

bb9:
  call void @_sysy_stoptime(i32 42)
  ret i32 0
}

