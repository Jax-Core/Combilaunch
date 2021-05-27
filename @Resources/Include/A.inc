

[A2]
Meter=String
MeterStyle=RegularText | A
Text=#MatchAction2#
LeftMouseUpAction=[!SetVariable Index 2][!CommandMeasure Input2 "ExecuteBatch 1"]
RightMouseUpAction=[!ToggleMeasure ExtendScroll][!ToggleMouseActionGroup "LeftMouseUpAction" ActionTab][!UpdateMeasureGroup Mouse][!UpdateMeterGroup ExtendedMenu][!SetVariable Index 2][!ToggleMeterGroup ExtendedMenu]

[A3]
Meter=String
MeterStyle=RegularText | A
Text=#MatchAction3#
LeftMouseUpAction=[!SetVariable Index 3][!CommandMeasure Input2 "ExecuteBatch 1"]
RightMouseUpAction=[!ToggleMeasure ExtendScroll][!ToggleMouseActionGroup "LeftMouseUpAction" ActionTab][!UpdateMeasureGroup Mouse][!UpdateMeterGroup ExtendedMenu][!SetVariable Index 3][!ToggleMeterGroup ExtendedMenu]

[A4]
Meter=String
MeterStyle=RegularText | A
Text=#MatchAction4#
LeftMouseUpAction=[!SetVariable Index 4][!CommandMeasure Input2 "ExecuteBatch 1"]
RightMouseUpAction=[!ToggleMeasure ExtendScroll][!ToggleMouseActionGroup "LeftMouseUpAction" ActionTab][!UpdateMeasureGroup Mouse][!UpdateMeterGroup ExtendedMenu][!SetVariable Index 4][!ToggleMeterGroup ExtendedMenu]

