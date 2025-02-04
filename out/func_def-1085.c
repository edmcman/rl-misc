#include <stdlib.h>

# 1 
int bar(int * pnum, char * ptr)
{
    int i = 0;

    int *invalid = NULL;
    int **pp = &invalid;

    *pp = &i;

    i = *ptr - 'a';
    i = (i + 1) % 26;
    *ptr = 'a' + i;
    *pnum += 1;
    return *pnum;
}