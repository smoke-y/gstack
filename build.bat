@echo off

set buildDir=bin\win\
set buildFlags=/Z7 /D DBG=1 /D WIN=1 /Ivendor\raylib\src\ -c
set linkerFlags=/DEBUG /PDB:%buildDir%\okc.pdb

set rayDir=%buildDir%\raylib
if not exist %buildDir% mkdir %buildDir%
if not exist %rayDir% (
    mkdir %rayDir%
    cl /nologo vendor/raylib/src/rglfw.c %buildFlags% /Fo:%rayDir%\rglfw.obj
    cl /nologo vendor/raylib/src/raudio.c %buildFlags% /Fo:%rayDir%\raudio.obj
    cl /nologo vendor/raylib/src/rmodels.c %buildFlags% /Fo:%rayDir%\rmodels.obj
    cl /nologo vendor/raylib/src/rshapes.c %buildFlags% /Fo:%rayDir%\rshapes.obj
    cl /nologo vendor/raylib/src/rtext.c %buildFlags% /Fo:%rayDir%\rtext.obj
    cl /nologo vendor/raylib/src/rtextures.c %buildFlags% /Fo:%rayDir%\rtextures.obj
    cl /nologo vendor/raylib/src/utils.c %buildFlags% /Fo:%rayDir%\utils.obj
    cl /nologo src/win32/raylib.c %buildFlags% /Ivendor\raylib\src\external\glfw\include\ /Fo:%rayDir%\win32raylib.obj

    lib /nologo %rayDir%\win32raylib.obj %rayDir%\utils.obj %rayDir%\rglfw.obj %rayDir%\raudio.obj %rayDir%\rmodels.obj %rayDir%\rshapes.obj %rayDir%\rtext.obj %rayDir%\rtextures.obj /out:%rayDir%\raylib.lib
)

cl /nologo src\build.cc %buildFlags% /Fo:%buildDir%\main.obj
link /NOLOGO %buildDir%\main.obj %rayDir%/raylib.lib /OUT:%buildDir%\game.exe