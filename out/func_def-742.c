#include <stdlib.h>

#include <string.h>

#include <stdio.h>

#include <assert.h>

#include <ctype.h>

# 1 
int LI_ltostr(char *buf, long val) {
 char swap;
 char *end;
 int len = 1;

 if (val < 0) {
  len++;
  *(buf++) = '-';
  val = -val;
 }

 end = buf;
 while (val > 9) {
  *(end++) = '0' + (val % 10);
  val = val / 10;
 }
 *(end) = '0' + val;
 *(end + 1) = '\0';
 len += end - buf;

 while (buf < end) {
  swap = *end;
  *end = *buf;
  *buf = swap;

  buf++;
  end--;
 }

 return len;
}