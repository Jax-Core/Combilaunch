[WebParser]
Measure=WebParser
URL=https://api.github.com/repos/EnhancedJax/Combilaunch/releases/latest
RegExp=(?siU)\{.*"tag_name":"(.*)".*}
FinishAction=[!Delay 1000][!EnableMeasure Compare][!UpdateMeasure Compare]

[Version]
Measure=WebParser
URL=[WebParser]
StringIndex=1

[Compare]
Measure=String
String=[Version]
DynamicVariables=1
Disabled=1
IfMatchMode=1
IfMatch=v1\.1
IfNotMatchAction=[!DisableMouseAction * *][!SetVariable DotColorOpacity "5"][!SetVariable DotBorderOpacity "5"][!SetVariable BackgroundColor 0,0,0][!SetVariable BackgroundOpacity 150][!UpdateMeter *][!ShowMeter UAlert][!EnableMouseAction UAlert *][!UpdateMeter *][!Redraw]

[UAlert]
Meter=String
X=((#Padding#+10)+100*#Gap#)
Y=((#Padding#+10)+100*#Gap#)
Hidden=1
Text=Update Avaliable!#CRLF#Click here to download
FontSize=13
FontColor=255,255,255
FontFace=Segoe UI
AntiAlias=1
InlinePattern=(.*)#CRLF#
InlineSetting=Weight | 700
StringAlign=CenterCenter
SolidColor=0,0,0,1
Padding=20,50,20,50
MouseActionCursor=1
LeftMouseUpAction=["https://github.com/EnhancedJax/Combilaunch/releases/latest"]