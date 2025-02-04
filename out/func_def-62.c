#include <stdio.h>

#include <stdlib.h>																								// per la malloc

#include <string.h>																								// per manipolare stringhe

#include <fcntl.h>																								// per fcntl

#include <sys/socket.h>

# 1 
char chrrpl(char *str, char c, char d) {
 if (c==d) return 0;

 str = strchr(str, c);
 if (str==NULL) return 0;

 while (str!=NULL) {
  str[0]=d;
  str = strchr(str, c);
 }
 return 1;
}