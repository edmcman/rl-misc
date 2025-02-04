#include <stdlib.h> // for malloc and free

# 1 
int make_int(int * a_int, long a_long) {
    *a_int = (int)(a_long);
    long a2 = (long)(*a_int);
    if (a2 != a_long) return 1;
    return 0;
}