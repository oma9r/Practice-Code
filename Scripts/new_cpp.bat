@echo off
REM Ask user for new cpp file name
set /p name=Enter new cpp file name (without extension): 

REM Copy template to current folder
copy "C:\Users\user\OneDrive\Desktop\practice\templates" "%cd%\%name%.cpp"

REM Confirmation message
echo Created %name%.cpp in %cd%
pause
