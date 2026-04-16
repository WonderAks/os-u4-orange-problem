@echo off
setlocal
if /I "%~1"=="/c" shift
"C:\msys64\usr\bin\bash.exe" -lc "%*"
exit /b %errorlevel%
