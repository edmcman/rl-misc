#include <memory.h>

#include <assert.h>

#include <ctype.h>

#include <math.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
char* mb_strupr(char* s) {
 char* t = s;

 while(*s) {
  *s = ((((*s) >= 'a' && (*s) <= 'z')) ? ((*s) - 'a' + 'A') : (*s));
  ++s;
 }

 return t;
}