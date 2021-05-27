

[X2]
Meter=String
MeterStyle=IconText | X
LeftMouseUpAction=[!SetVariable NumberOfIndices "([#NumberOfIndices]-1)"][!SetVariable DeleteIndex 2][!Delay 5][!WriteKeyValue Variables NumberOfIndices [#NumberOfIndices] "#@#Checks.inc"][!CommandMeasure CombiScript "Delete"]

[X3]
Meter=String
MeterStyle=IconText | X
LeftMouseUpAction=[!SetVariable NumberOfIndices "([#NumberOfIndices]-1)"][!SetVariable DeleteIndex 3][!Delay 5][!WriteKeyValue Variables NumberOfIndices [#NumberOfIndices] "#@#Checks.inc"][!CommandMeasure CombiScript "Delete"]

[X4]
Meter=String
MeterStyle=IconText | X
LeftMouseUpAction=[!SetVariable NumberOfIndices "([#NumberOfIndices]-1)"][!SetVariable DeleteIndex 4][!Delay 5][!WriteKeyValue Variables NumberOfIndices [#NumberOfIndices] "#@#Checks.inc"][!CommandMeasure CombiScript "Delete"]

