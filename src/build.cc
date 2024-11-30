#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

#include "raylib.h"
#include "../vendor/raygui/src/raygui.h"

#include "basic.hh"
#if(WIN)
#include "win32/trace.cc"
#include "win32/init.cc"
#endif

#include "main.cc"