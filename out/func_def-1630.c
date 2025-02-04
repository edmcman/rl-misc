#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <time.h>

# 1 
static int update_keys(unsigned long* pkeys,const unsigned long* pcrc_32_tab,int c)
{
  (*(pkeys+0)) = ((*(pcrc_32_tab+(((int)((*(pkeys+0))) ^ (c)) & 0xff))) ^ (((*(pkeys+0))) >> 8));
  (*(pkeys+1)) += (*(pkeys+0)) & 0xff;
  (*(pkeys+1)) = (*(pkeys+1)) * 134775813L + 1;
  {
    register int keyshift = (int)((*(pkeys+1)) >> 24);
    (*(pkeys+2)) = ((*(pcrc_32_tab+(((int)((*(pkeys+2))) ^ (keyshift)) & 0xff))) ^ (((*(pkeys+2))) >> 8));
  }
  return c;
}