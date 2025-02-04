#include <stdio.h>

#include <stdlib.h>

#include <limits.h>

#include <math.h>

# 1 
void LEB36ToInt( char *leb36, int *dec ) {
    int i, mult, num;
    char *p;


    num = 0;
    mult = 1;

    for ( p = leb36; *p != '\0'; p++ ) {
        if ( *p < 65 )
            i = ( *p ) & 0xF;
        else
            i = ( ( *p ) & 0x1F ) + 9;

        num += ( i * mult );
        mult *= 36;
    }

    *dec = num;

    return;
}