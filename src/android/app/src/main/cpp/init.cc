namespace gstack{
    void init(){
        #if(RLS)
        traceData::file = fopen("data/data/g.stack.gstack/files/gstack.log", "w");
        #endif
    }
    void uninit(){
        #if(RLS)
        fclose(traceData::file);
        #endif
    }
};