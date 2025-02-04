#include <ctype.h>

#include <errno.h>

#include <malloc.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <sys/syscall.h>

#include <unistd.h>

#include <signal.h>

# 1 
void itoa (char *buf, int base, int d) {
 char *p = buf;
 char *p1, *p2;
 unsigned long ud = d;
 int divisor = 10;


 if (base == 'd' && d < 0) {
  *p++ = '-';
  buf++;
  ud = -d;
 } else if (base == 'x') {
  divisor = 16;
 } else if (base == 'o') {
  divisor = 8;
 }


 do {
  int remainder = ud % divisor;

  *p++ = (remainder < 10) ? remainder + '0' : remainder + 'a' - 10;
 } while (ud /= divisor);


 *p = 0;


 p1 = buf;
 p2 = p - 1;
 while (p1 < p2)
 {
  char tmp = *p1;
  *p1 = *p2;
  *p2 = tmp;
  p1++;
  p2--;
 }
}