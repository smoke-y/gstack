#if(DBG)
void glog(const char *fmt, ...){
    va_list args;
    va_start(args, fmt);
    vprintf(fmt, args);
    va_end(args);
};
#else
namespace trace{
    static void FILE* traceFile;
};
void clog(const char *fmt, ...){
    va_list args;
    va_start(args, fmt);
    vfprintf((FILE*)trace::traceFile, fmt, args);
    va_end(args);
};
#endif