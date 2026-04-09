@echo off

REM Ask user for new cpp file name
set /p name=Enter new cpp file name (without extension): 

REM Copy template to current folder
copy "C:\Users\user\OneDrive\Desktop\practice\templates\template.cpp" "%cd%\%name%.cpp" >nul

REM Open file in Notepad (non-blocking)
start "" notepad "%cd%\%name%.cpp"