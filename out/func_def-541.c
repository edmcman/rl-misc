#include <sys/socket.h>

#include <netinet/in.h>

#include <unistd.h>

#include <fcntl.h>

# 1 
unsigned int
_scan_un(const char *s, unsigned char*d)
{
  const char *t=s;
  register unsigned char n=0;
  unsigned char c;

  for(;(c=*t-'0')<10; ++t) n+=((n*10)+c);

  if(t-s) *d=n;
  return t-s;
}