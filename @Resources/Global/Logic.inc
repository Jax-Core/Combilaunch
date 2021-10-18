[Name]
Measure=String
String=#CURRENT#
DynamicVariables=1
IfMatch=^#Pattern1#$
IfMatchAction=[!SetOption S Text "#Name1#"]
IFMatchMode=1
Disabled=1
Group=NUOL
Group=OverUpdate

[Launch]
Measure=String
String=#CURRENT#
DynamicVariables=1
IfMatch=^#Pattern1#$
IfMatchAction=#MatchAction1#[!UpdateMeasure Confirm:M]
IFMatchMode=1
Disabled=1
Group=NUOL
Group=EndUpdate