[B]
Meter=Shape
X=[5:X]
Y=[5:Y]
DynamicVariables=1
Shape=Rectangle (-95*#Gap#),(-95*#Gap#),(95*2*#Gap#),(95*2*#Gap#),5,5 | StrokeWidth 0 | Rotate 45 | Fill Color #BackgroundColor#,(Clamp(#BackgroundOpacity#,1,255))
MouseLeaveAction=

[C]
Shape=Rectangle (-#Size#*10),(-#Size#*10),(#Size#*10*2),(#Size#*10*2) | StrokeWidth 10 | Fill Color #DotColor#,#DotColorOpacity# | StrokeColor #DotBorderColor#,#DotBorderOpacity# | Rotate 45 | Extend Pulse
Pulse=Scale 1,1
Shape2=Ellipse 0,0,(#DotBox#/2),(#DotBox#/2) | StrokeWidth 0 | Fill Color 0,0,0,1
LeftMouseDownAction=[!Log Down][!ShowMeter l2][!SetOption measureMouse Disabled (1-#MouseTraceBool#)][!Updatemeasure measureMouse][!SetVariable CURRENTLINE "([#CURRENTSECTION#:X]-40),([#CURRENTSECTION#:Y]-40)"][!SetVariable CURRENTPOS "([#CURRENTSECTION#:X]),([#CURRENTSECTION#:Y])"][!SetOptionGroup C MouseOverAction """[!Log Over][!SetVariable CURRENT "#*CURRENT*##*CURRENTSECTION*#"][!SetVariable CURRENTLINE "#*CURRENTLINE*# | LineTo ([#*CURRENTSECTION*#:X]-40),([#*CURRENTSECTION*#:Y]-40) | SetRoundJoin 1"][!SetVariable CURRENTPOS "([#*CURRENTSECTION*#:X]),([#*CURRENTSECTION*#:Y])"][!SetOption #*CURRENTSECTION*# MouseOverAction ""][!SetOption S Text ""][!UpdateMeasure Name][!UpdateMeter *][!Redraw]#PulseAction#"""][!SetOption B MouseLeaveAction """#*EndActions*#[!SetVariable DotColor 255,0,0][!UpdateMeter *][!Redraw][!Delay 200][!SetVariable DotColor #DotColorbackup#][!UpdateMeter *][!Redraw]"""][!UpdateMeter *]
DynamicVariables=1
Group=C
X=(#Gap#*50)r
Y=(#Gap#*50)r

@includeCommon=Common.inc

[1]
Meter=Shape
X=(#Padding#+10+#Gap#*100)
MeterStyle=C
[L]
Meter=Shape
X=r
Y=r
DynamicVariables=1
Shape=Path This | StrokeWidth (5) | Stroke Color #ShadowColor#,#ShadowColorOpacity# | Fill Color 0,0,0,1 | StrokeStartCap Round | StrokeEndCap Round | Offset (2-100),2
Shape2=Path This | StrokeWidth (5) | Stroke Color #LineColor#,#LineOpacity# | Fill Color 0,0,0,1 | StrokeStartCap Round | StrokeEndCap Round | Offset -100,0
This=#CURRENTLINE#
[2]
Meter=Shape
MeterStyle=C
[3]
Meter=Shape
MeterStyle=C
[4]
Meter=Shape
X=([1:X]-#Gap#*50)
Y=([1:Y]+#Gap#*50)
MeterStyle=C
[5]
Meter=Shape
MeterStyle=C
[6]
Meter=Shape
MeterStyle=C
[7]
Meter=Shape
X=([1:X]-#Gap#*50*2)
Y=([1:Y]+#Gap#*50*2)
MeterStyle=C
[8]
Meter=Shape
MeterStyle=C
[9]
Meter=Shape
MeterStyle=C