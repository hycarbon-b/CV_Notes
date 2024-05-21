echo off
set LOCALHOST=%COMPUTERNAME%
set KILL_CMD="A:\work_program\ansys\ANSYS Inc\ANSYS Student\v241\fluent/ntbin/win64/winkill.exe"

start "tell.exe" /B "A:\work_program\ansys\ANSYS Inc\ANSYS Student\v241\fluent\ntbin\win64\tell.exe" DESKTOP-4F230BN 63397 CLEANUP_EXITING
timeout /t 1
"A:\work_program\ansys\ANSYS Inc\ANSYS Student\v241\fluent\ntbin\win64\kill.exe" tell.exe
if /i "%LOCALHOST%"=="DESKTOP-4F230BN" (%KILL_CMD% 5128) 
if /i "%LOCALHOST%"=="DESKTOP-4F230BN" (%KILL_CMD% 8640) 
if /i "%LOCALHOST%"=="DESKTOP-4F230BN" (%KILL_CMD% 35868)
del "A:\onedrive_gt\OneDrive - Guangdong Technion-Israel Institute of Technology\notes\course\fluid_dynamic\mid-term\cleanup-fluent-DESKTOP-4F230BN-8640.bat"
