#include <stdio.h>

#include <stdarg.h>

# 1 
char *myitoa(int n, char *s, int base)
{
 int nn;
 char *tb = "0123456789ABCDEF";
 char st[32];
 char *sp = s, *stp = st;

 *stp = 0;
 while(n > 0) {
  nn = n % base;
  n /= base;
  stp++;
  *stp = tb[nn];
 }
 while(*sp++ = *stp--);
 return s;
}