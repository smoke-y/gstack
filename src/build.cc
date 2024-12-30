#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

#include "raylib.h"
#if(DBG)
#include "../vendor/raygui/src/raygui.h"
#endif

#include "basic.hh"
#if(WIN)
#include "win32/trace.cc"
#include "win32/init.cc"
#endif

#include "game.cc"
#include GAME_ENTRY