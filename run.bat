@echo off
REM Compile and run on Windows (needs g++ / MinGW in PATH)
g++ -std=c++11 dynamic_memory_new_delete.cpp -o dynamic_memory.exe
if errorlevel 1 (
    echo Compilation failed.
    pause
    exit /b
)
dynamic_memory.exe
pause
