#include <stdio.h>

#include <stdlib.h> 

#include <string.h> 

# 1 
unsigned int conv_dstring ( char *string, unsigned int * addr)
{
unsigned int pos = 0;
*addr = 0;

while (((string[pos] >= '0' && string[pos] <= '9')) && pos < 9) {
    *addr = (*addr * 10) + ( string[pos++] - '0' );
    }

return pos;
}