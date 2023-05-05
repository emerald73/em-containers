title Program Compiler
cls
@ECHO off
color 0a
e:
cd e:programming stuffs/em-containers/em-containers
echo Compiling Program...
g++ -o program.exe containers.cpp
echo Program Compiled.
echo Running Program...
program.exe
timeout 15
