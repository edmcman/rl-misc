#include <ctype.h>

#include <stdio.h>

#include <string.h>

# 1 
int xshift ( short *runs, int nr, int s )
{
  int i=0, n=0 ;
  if ( s < 0 ) {
    for ( i = 0 ; s < 0 && i < nr ; i++ ) {
      s += runs [ i ] ;
      n -= runs [ i ] ;
      runs [ i ] = 0 ;
    }
    i-- ;
  }
  if ( i < nr ) {
    runs [ i ] += s ;
    n += s ;
  }
  return n ;
}