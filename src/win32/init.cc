namespace gstack{
    void init(const char *traceFileName){
        #if(RLS)
        trace::traceFile = fopen(traceFileName, "a+");
        #endif
    }
    void uninit(){
        #if(RLS)
        fclose(trace::traceFile);
        #endif
    }
};