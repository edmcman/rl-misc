#include <sys/types.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <stdio.h>

#include <errno.h>

#include <sys/file.h>

#include <unistd.h>

#include <time.h>

#include <stdlib.h>

# 1 
char* tt_strdelim(char* buf, int* cnt, char delim, char esc){
  char* src = buf;
  char* dst = NULL;
  *cnt = 0;

  while( *src != esc){
    if( 0x0 == *src)
      return src;
    if( delim == *src)
      return src;
    ++src;
  }

  ++(*cnt);
  dst = src;
  ++src;
  if( 0x0 == *src)
    return src;
  *dst = *src;
  ++src;
  ++dst;

  while( 0x0 != *src){
    if( *src == esc){
      ++(*cnt);
      ++src;
      if( 0x0 == *src)
        return src;
      *dst = *src;
    }
    else{
      if(delim == *src){
        return dst;
      }
      *dst = *src;
    }
    ++dst;
    ++src;
  }
  return dst;
}