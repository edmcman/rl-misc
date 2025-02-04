#include <stdio.h>

#include <stdarg.h>

#include <unistd.h>

#include <sys/socket.h>

#include <sys/types.h>

#include <sys/shm.h>

#include <stdlib.h>

#include <netdb.h>

#include <errno.h>

#include <string.h>

# 1 
char *strrev(char *str){
 char *i=str;
 char *ri=0;
 char tmp;

 while(*i)
  i++;
 ri=i-1;
 i=str;
 while(*i && i<ri){
  tmp=*i;
  *i=*ri;
  *ri=tmp;
  i++;
  ri--;
 }
 return str;
}