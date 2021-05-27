[Variables]
;Permanent variables
NumberOfIndices=4

;Power variables
SlidetoShutdown=%windir%\System32\SlideToShutDown.exe
Shutdown="%systemroot%\system32\shutdown.exe" -s -t [#ShutdownDelay]
Restart="%systemroot%\system32\shutdown.exe" -r -t [#RestartDelay]
Sleep="%windir%\System32\rundll32.exe" powrprof.dll,SetSuspendState
Lock="%windir%\System32\rundll32.exe" User32.dll,LockWorkStation
SignOut="%windir%\System32\shutdown.exe" -L
@includePowerVars=#@#PowerDelays.inc

[Name]
Measure=String
String=#CURRENT#
DynamicVariables=1
IfMatch=^#Pattern#$
IfMatchAction=[!SetOption S Text "#Name1#"]
IFMatchMode=1
Disabled=1
Group=NoUpdateOnLoad


[Launch]
Measure=String
String=#CURRENT#
DynamicVariables=1
IfMatch=^#Pattern1#$
IfMatchAction=#MatchAction#
IFMatchMode=1
Disabled=1
Group=NoUpdateOnLoad
