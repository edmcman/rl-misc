#include <sys/mman.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <unistd.h>

#include <errno.h>

#include <sys/syscall.h>

#include <stdarg.h>

# 1 
char *AppendNumber( char *target, int num )
{
 int n = 0, i = 0;

 do {
  target[n++] = (num%10) + '0';
  num /= 10;
 } while (num);
 target[n] = 0;

 while ((n-1) > i)
 {

  char x = target[--n];
  target[n] = target[i];
  target[i++] = x;
 }
 return target + i + n;
}