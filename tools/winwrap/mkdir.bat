@echo off
if "%~1"=="-p" (
    shift
)
:nextarg
if "%~1"=="" exit /b 0
if not exist "%~1" mkdir "%~1"
shift
goto nextarg
