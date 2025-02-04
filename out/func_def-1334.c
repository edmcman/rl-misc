#include <stdio.h>

#include <strings.h>

#include <stdlib.h>

# 1 
void find_big( int char1, int char2,
       int * outchar1, int * outchar2 )
{
  int rno, tmp1, tmp2;
  rno = (char1-137)*188 + char2 - 63 - (char2>126)?1:0;
  rno -= (rno>408)?93:0;
  tmp1 = rno%157+161;
  tmp2 = (rno - ((rno % 157) * 157))+63;
  tmp2 += (tmp2>126)?34:0;
  *outchar1 = tmp1;
  *outchar2 = tmp2;
  return;
}