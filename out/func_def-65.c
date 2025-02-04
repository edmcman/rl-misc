#include <stdint.h>

#include <time.h>

#include <sys/time.h>

#include <sys/syscall.h>

#include <asm/vsyscall.h>

# 1 
static char *itoa(long num, char *buf)
{
 char *p = buf;
 long tmp;

 if (num < 0) {
  *p++ = '-';
  num = ~num + 1;
 }

 tmp = num;
 do {
  tmp /= 10;
  p++;
 } while (tmp);

 *p-- = '\0';
 do {
  *p-- = (num % 10) + '0';
  num /= 10;
 } while (num);

 return buf;
}