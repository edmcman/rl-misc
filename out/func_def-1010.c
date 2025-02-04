
# 1 
int
atomic_add(int *variable, int value)
{

    return (int) __sync_fetch_and_add (variable, value);
# 60 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/dongyoungy/MaxScale/refs/heads/master/server/core/atomic.c"
}