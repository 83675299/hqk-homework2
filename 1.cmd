@pause
@echo off
set /p var=�������ļ�����
cd "%var%"
set /p var=�������ļ���
gcc "%var%" -o lang.exe
if exist "lang.exe" echo ����ɹ�
if not exist "lang.exe" echo ����ʧ��
pause