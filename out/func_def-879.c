#include <string.h>

#include <stdlib.h>

#include <stdio.h>

#include <unistd.h>

#include <time.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <sys/socket.h>

#include <fcntl.h>

#include <dirent.h>

#include <regex.h>

# 1 
void copy(char *dst, char *src) {
 while(*src) {
  *dst = *src;
  dst++;
  src++;
 }
 *dst='\0';
}