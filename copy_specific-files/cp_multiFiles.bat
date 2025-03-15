@echo off

@REM Specify path of each file to filelist.txt
@REM Specify destination path of output
set dest_path=../ConsoleApplication

for /F "tokens=*" %%A in (filelist.txt) do (
    xcopy "%%A" "%dest_path%" /Y
)

echo Files copied successfully!
pause
