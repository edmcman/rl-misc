#include <ctype.h>

#include <stdlib.h>

#include <signal.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <fcntl.h>

# 1 
int SeekPoint(unsigned char TOC[100], int file_bytes, double percent)
{

 int a, seekpoint;
 double fa, fb, fx;

 if( percent < (double)0.0 ) percent = (double)0.0;
 if( percent > (double)100.0 ) percent = (double)100.0;

 a = (int)percent;
 if( a > 99 ) a = 99;
 fa = TOC[a];
 if( a < 99 ) {
  fb = TOC[a+1];
 } else {
  fb = (double)256.0;
 }

 fx = fa + (fb-fa)*(percent-a);

 seekpoint = (int)(((double)(1.0/256.0))*fx*file_bytes);

 return seekpoint;
}