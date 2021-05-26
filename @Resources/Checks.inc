[Variables]
;Permanent variables
NumberOfIndices=17
Name=CombilaunchHelp
Pattern=147569
MatchAction=["https://github.com/EnhancedJax/Combilaunch"]

[Name]
Measure=String
String=#CURRENT#
DynamicVariables=1
IfMatch=^#Pattern#$
IfMatchAction=[!SetOption S Text "#Name#"]
IFMatchMode=1
Disabled=1
Group=NoUpdateOnLoad


[Launch]
Measure=String
String=#CURRENT#
DynamicVariables=1
IfMatch=^#Pattern#$
IfMatchAction=#MatchAction#
IFMatchMode=1
Disabled=1
Group=NoUpdateOnLoad
