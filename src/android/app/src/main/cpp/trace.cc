#if(DBG)
#include <android/log.h>
#define trace(...) __android_log_print(ANDROID_LOG_INFO, "GSTACK", __VA_ARGS__)
#elif(RLS)
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
namespace traceData{
    static FILE *file;
};
void trace(const char *fmt, ...){
    va_list args;
    va_start(args, fmt);
    vfprintf(traceData::file, fmt, args);
    va_end(args);
};
#endif