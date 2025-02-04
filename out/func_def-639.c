#include <stdio.h>

# 1 
void copy1( char * const s1, const char * const s2 )
{
 size_t i;


 for ( i = 0; ( s1[ i ] = s2[ i ] ) != '\0'; ++i ) {
  ;
 }
}