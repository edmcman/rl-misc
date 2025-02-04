#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
int decode_hex(const char * p, int len, int * pvalid)
{
 int valid = 1;
 int value = 0;
 int ii;
 for (ii = 0; ii < len; ++ii) {
  int ch = p[ii];
  if (ch >= '0' && ch <= '9') {
   ch -= '0';
  } else {
   ch &= ~20;
   if (ch < 'A' || ch > 'F') {

    valid = 0;
    break;
   }
   ch = ch - 'A' + 0x0A;
  }
  value = (value << 4) + ch;
 }
 if (pvalid) *pvalid = valid;
 return value;
}