#include <unistd.h>

#include <fcntl.h>

#include <sys/mman.h>

#include <elf.h>

#include <stdlib.h>

#include <stdint.h>

# 1 
static char* _stpcpy(char* dest,const char* src) {
  size_t i;
  for (i=0; src[i]; ++i)
    dest[i]=src[i];
  dest[i]=0;
  return dest+i;
}