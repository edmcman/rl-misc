#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <errno.h>

#include <assert.h>

# 1 
static char* strtok2(char* str, char* delim){
 static char* next = NULL;

 if ( !str ){
  str = next;
 }

 if ( !str ){
  return NULL;
 }

 char* tmp = strpbrk(str, delim);
 if ( !tmp ){
  next = NULL;
  return str;
 }

 *tmp = 0;
 next = tmp+1;

 return str;
}