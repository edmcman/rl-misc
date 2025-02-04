#include <stdlib.h>

#include <string.h>

#include <ctype.h>

#include <stdio.h>

#include <expat.h>

# 1 
static int Xstrncpy(XML_Char* a, const XML_Char* b, int len) {
 int x;

 for (x=0; b[x] != 0 && x<len; x++) {
  a[x] = b[x];
 }

 a[x] = 0;

 return x;
}