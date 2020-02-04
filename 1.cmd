@pause
@echo off
set /p var=请输入文件所在
cd "%var%"
set /p var=请输入文件名
gcc "%var%" -o lang.exe
if exist "lang.exe" echo 编译成功
if not exist "lang.exe" echo 编译失败
pause