#include    <stdlib.h>  /* Include standard library header */

#include    <math.h>    /* Include math library header */

#include    <string.h>  /* Include string function header */

#include    <ctype.h>   /* Include character function header */

#include    <limits.h>  /* define LONG_MIN and LONG_MAX */

# 1 
char* num2string(long num, int nfrac, int *strlength, char *str17)
{
char *bufptr;
int neg = num < 0;
long unum = neg ? -num : num;

bufptr = (str17+16);
*bufptr = 0;
*strlength = 0;

do{
  *--bufptr = (unum % 10) + '0';
  (*strlength)++;
  if(*strlength==nfrac){
    *--bufptr = '.';
    (*strlength)++;
    nfrac = 0;
  }
} while((unum/=10)||nfrac);


if(neg){
  *--bufptr = '-';
  (*strlength)++;
}

return bufptr;
}