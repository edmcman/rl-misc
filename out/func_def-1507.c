
# 1 
static int wdl_atomic_decr(int *v) { return __sync_add_and_fetch(v,~0); }