#if(DBG)
void trace(const char *fmt, ...){
    va_list args;
    va_start(args, fmt);
    vprintf(fmt, args);
    va_end(args);
};
#else
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