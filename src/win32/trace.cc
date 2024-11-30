#if(DBG)
void glog(const char *fmt, ...){
    va_list args;
    va_start(args, fmt);
    vprintf(fmt, args);
    va_end(args);
};
#else
namespace trace{
    static FILE *traceFile;
};
void glog(const char *fmt, ...){
    printf("LKSJDF");
    va_list args;
    va_start(args, fmt);
    vfprintf(trace::traceFile, fmt, args);
    va_end(args);
};
#endif