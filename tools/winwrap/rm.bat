@echo off
if "%~1"=="-rf" (
    if exist "%~2" rmdir /s /q "%~2"
    exit /b 0
)
exit /b 1
