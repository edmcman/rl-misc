#include <openssl/dh.h>

#include <openssl/pem.h>

#include <openssl/bn.h>

# 1 
static void utilStringFilter(char *strout, const char *strin, const int strlen) {
 int i, c;
 i = 0;
 while(i < strlen) {
  c = strin[i];
  if(c >= 'a' && c <= 'z') {
   strout[i] = (c - 'a' + 'A');
  }
  else if((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')) {
   strout[i] = c;
  }
  else if(c == '\0') {
   strout[i] = '\0';
   break;
  }
  else {
   strout[i] = '_';
  }
  i++;
 }
}