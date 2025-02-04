#include <stdio.h>

#include <stdlib.h> 

# 1 
int conv_hstring ( char *string, unsigned int * addr)
{
    int pos = 0;
    *addr = 0;

    while (((string[pos] >= '0' && string[pos] <= '9') ||
           (string[pos] >= 'a' && string[pos] <= 'f')) && pos < 9) {
        if (string[pos] >= '0' && string[pos] <= '9')
            *addr = (*addr << 4) + ( string[pos++] - '0' );
        else
            *addr = (*addr << 4) + ( string[pos++] - 'a' ) + 10;
        }

    return pos;
}