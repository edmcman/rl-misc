#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

#include <string.h>

# 1 
char * nmea_copy_field( char *dest, char *src, int len )
{
    while ( len
           && src
           && dest
           && (*src != 0)
           && (*src != ',')
           && (*src != '*') ) { *dest++ = *src++; len--; }

    *dest = 0;
    return dest;
}