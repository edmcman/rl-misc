#include <stdio.h>

#include <stdlib.h>

#include <limits.h>

#include <math.h>

# 1 
void IntToLEB36( int *dec, char *leb36 ) {
    int i, div;
    char *p, c;

    if ( *dec == 0 ) {
        leb36[0] = '0';
        leb36[1] = '\0';
    }

    div = *dec;
    p = leb36;

    while ( div > 0 ) {
        i = div % 36;
        ( i < 10 ) ? ( c = i + 48 ) : ( c = i + 55 );
        *p = c;
        div /= 36;
        p++;
    }

    if ( p == leb36 )
        *( p++ ) = '0';

    *p = '\0';

    return;
}