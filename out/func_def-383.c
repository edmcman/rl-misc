#include <time.h>

# 1 
static char* append02d( char* cp, int n )
{
    *cp++ = '0' + (n / 10);
    *cp++ = '0' + (n % 10);
    return cp;
}