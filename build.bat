set PATH=%userprofile%\Downloads\codeblocks-20.03mingw-nosetup\MinGW\bin\

g++ -o johnny705.exe main.cpp robot.cpp arduino.cpp -include arduino.h -lgdi32 -luser32 -lkernel32 -lcomctl32 -lgdiplus
