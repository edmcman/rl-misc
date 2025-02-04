#include <sys/types.h>

#include <sys/stat.h>

#include <unistd.h>

#include <stdlib.h>

#include <string.h>

#include <fcntl.h>

#include <stdio.h>

# 1 
int force_read(int fd,unsigned char *buf,int sz) {
 int got=0,rd;

 while (sz > 0) {
  rd = read(fd,buf,sz);
  if (rd <= 0) break;
  got += rd;
  buf += rd;
  sz -= rd;
 }

 return got;
}