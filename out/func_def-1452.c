#include <sys/syscall.h>

#include <sys/select.h>

#include <signal.h>

# 1 
static int read_attr(char *buf, int len, int fd)
{
 int n;

 if (fd < 0) {
  buf[0] = 0;
  return 0;
 }
 lseek(fd, 0, 0);
 n = read(fd, buf, len - 1);

 if (n <= 0) {
  buf[0] = 0;
  return 0;
 }
 buf[n] = 0;
 if (buf[n-1] == '\n')
  buf[n-1] = 0;
 return n;
}