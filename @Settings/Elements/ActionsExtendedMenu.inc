[Variables]
ShutBool=0
ShutArrow0=[\xE76C]
ShutArrow1=[\xE70D]
ExtendedScroll=0

[ExtendedMenuContainer]
Meter=Image
X=(Clamp(([MouseX]-[#CURRENTCONFIGX]), 0, 700))
Y=(Clamp(([MouseY]-[#CURRENTCONFIGY]), 0, 349))
W=200
H=271
SolidColor=212121
Group=ExtendedMenu
DynamicVariables=1
MouseScrollDownAction=[!SetVariable ExtendedScroll "(Clamp(([#ExtendedScroll]-10), [ExtendScroll], 0))"][!UpdateMeter PowerOptionsHeader][!Redraw]
MouseScrollUpAction=[!SetVariable ExtendedScroll "(Clamp(([#ExtendedScroll]+10), [ExtendScroll], 0))"][!UpdateMeter PowerOptionsHeader][!Redraw]
Hidden=1

[ExtendedMenuBackGround]
Meter=Shape
X=0
Y=0
Shape=Rectangle 1,1,198,269 | StrokeWidth 2 | FillColor 212121 | Stroke Color FFFFFE
Container=ExtendedMenuContainer
Group=ExtendedMenu
Hidden=1

[Highlight]
Meter=Image
H=0
W=190
X=5
Y=
SolidColor=190,190,190,170
DynamicVariables=1
Container=ExtendedMenuContainer
Hidden=1
Group=ExtendedMenu

[PowerOptionsHeader]
Meter=String
Container=ExtendedMenuContainer
X=10
Y=(20+[#ExtendedScroll])
FontSize=10
FontFace=Segoe UI Semilight
Text=Power Options
MeterStyle=SemiBoldedText
Group=ExtendedMenu
DynamicVariables=1
Hidden=1

[Separator1]
Meter=Image
X=10
Y=3R
W=140
H=1
Container=ExtendedMenuContainer
SolidColor=FFFFFE
Group=ExtendedMenu
Hidden=1

[ShutDown]
Meter=String
Text=Shutdown
X=10
Y=19R
H=30
W=190
MeterStyle=SemiBoldedText
Container=ExtendedMenuContainer
MouseOverAction=[!SetOption Highlight Y ([[#CURRENTSECTION]:Y]-[ExtendedMenuContainer:Y])][!SetOption Highlight H 30][!UpdateMeter Highlight][!Redraw]
MouseLeaveAction=[!SetOption Highlight H 0][!UpdateMeter Highlight][!Redraw]
Group=ExtendedMenu
LeftMouseUpAction=[!SetVariable ShutBool (1-[#ShutBool])][!UpdateMeter ShutArrow][!Redraw][!ToggleMeterGroup ShutMenu][!UpdateMeasure ExtendScroll]
Hidden=1

[ShutArrow]
Meter=String
FontFace=Segoe MDL2 Assets
FontColor=255,255,255
FontWeight=700
AntiAlias=1
Text=[#ShutArrow[#ShutBool]]
X=-20R
Y=r
H=30
W=30
SolidColor=50,50,50,1
StringAlign=CenterCenter
DynamicVariables=1
Container=ExtendedMenuContainer

[SlidetoShutDown]
Meter=String
Text=SlidetoShutDown
X=20
Y=R
FontSize=10
FontFace=Segoe UI
FontWeight=400
Group=ShutMenu
Hidden=1
LeftMouseUpAction=[!WriteKeyValue Variables MatchAction[#Index] """["[#*SlidetoShutdown*]"]""" #@#Variables\MatchActions.inc][!WriteKeyValue Variables Name[#Index] "SlideToShutdown" #@#Variables\Names.inc][!Refresh]
MeterStyle=SemiBoldedText | ShutDown

[ShutDownCustom]
Meter=String
Text=With [#ShutdownDelay]s delay
X=20
Y=R
FontSize=10
FontFace=Segoe UI
FontWeight=400
Group=ShutMenu
Hidden=1
LeftMouseUpAction=[!WriteKeyValue Variables MatchAction[#Index] """[[#Shutdown]]""" #@#Variables\MatchActions.inc][!WriteKeyValue Variables Name[#Index] "Shutdown in [#ShutdownDelay]s" #@#Variables\Names.inc][!Refresh]
MeterStyle=SemiBoldedText | ShutDown


[Restart]
Meter=String
Text=Restart
Y=R
LeftMouseUpAction=[!WriteKeyValue Variables MatchAction[#Index] """[[#Restart]]""" #@#Variables\MatchActions.inc][!WriteKeyValue Variables Name[#Index] "Restart in [#RestartDelay]s" #@#Variables\Names.inc][!Refresh]
MeterStyle=SemiBoldedText | ShutDown

[Sleep]
Meter=String
Text=Sleep
Y=R
LeftMouseUpAction=[!WriteKeyValue Variables MatchAction[#Index] """[[#Sleep]]""" #@#Variables\MatchActions.inc][!WriteKeyValue Variables Name[#Index] "Sleep" #@#Variables\Names.inc][!Refresh]
MeterStyle=SemiBoldedText | ShutDown

[Lock]
Meter=String
Text=Lock
Y=R
LeftMouseUpAction=[!WriteKeyValue Variables MatchAction[#Index] """[[#Lock]]""" #@#Variables\MatchActions.inc][!WriteKeyValue Variables Name[#Index] "Lock" #@#Variables\Names.inc][!Refresh]
MeterStyle=SemiBoldedText | ShutDown

[SignOut]
Meter=String
Text=SignOut
Y=R
LeftMouseUpAction=[!WriteKeyValue Variables MatchAction[#Index] """[[#SignOut]]""" #@#Variables\MatchActions.inc][!WriteKeyValue Variables Name[#Index] "Sign out" #@#Variables\Names.inc][!Refresh]
MeterStyle=SemiBoldedText | ShutDown

[ExtraHeader]
Meter=String
Text=Extra
Y=10R
MeterStyle=SemiBoldedText | PowerOptionsHeader

[Separator2]
Meter=Image
MeterStyle=Separator1

[UWPFolder]
Meter=String
Text=UWP Folder
Y=19R
MeterStyle=SemiBoldedText | ShutDown
LeftMouseUpAction=["shell:AppsFolder"]
[LastItem]
Meter=String
H=0
W=0
Y=R
Container=ExtendedMenuContainer

[ExtendScroll]
Measure=Calc
Formula=([ExtendedMenuContainer:H]-([LastItem:Y]-[ExtendedMenuContainer:Y])+9)
DynamicVariables=1
Disabled=1