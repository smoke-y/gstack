#define PLATFORM_DESKTOP

#include "rcore.c"
#if(DBG)
#define RAYGUI_IMPLEMENTATION
#include "../../vendor/raygui/src/raygui.h"
#endif

#pragma comment(lib, "Shell32.lib")
#pragma comment(lib, "User32.lib")
#pragma comment(lib, "Gdi32.lib")
#pragma comment(lib, "Winmm.lib")