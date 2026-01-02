@echo off
echo 正在清理系统和用户的临时文件，请稍等
del /f /s /q "%SystemRoot%\Temp\*.*"
del /f /s /q %systemdrive%\recycled\*.*
del /f /s /q %windir%\prefetch\*.*
del /f /q %userprofile%\cookies\*.*
del /f /q %userprofile%\recent\*.*
del /f /s /q "%userprofile%\Local Settings\Temporary Internet Files\*.*"
del /f /s /q "%userprofile%\Local Settings\Temp\*.*"
for /d %%p in ("%SystemRoot%\Temp\*.*") do rmdir "%%p" /s /q
del /f /s /q "%LocalAppData%\Temp\*.*"
for /d %%p in ("%LocalAppData%\Temp\*.*") do rmdir "%%p" /s /q
echo 清理完成！
pause