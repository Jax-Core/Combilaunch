
[Name]
IfMatch2=^#Pattern2#$
IfMatchAction2=[!SetOption S Text "#Name2#"]
IfMatch3=^#Pattern3#$
IfMatchAction3=[!SetOption S Text "#Name3#"]
IfMatch4=^#Pattern4#$
IfMatchAction4=[!SetOption S Text "#Name4#"]
[Launch]
IfMatch2=^#Pattern2#$
IfMatchAction2=#MatchAction2#
IfMatch3=^#Pattern3#$
IfMatchAction3=#MatchAction3#
IfMatch4=^#Pattern4#$
IfMatchAction4=#MatchAction4#
