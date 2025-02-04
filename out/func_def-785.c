#include <stdio.h>

#include <stdlib.h>

#include <stdbool.h>

#include <string.h>

#include <stdint.h>

# 1 
int aux_cmp(char * base, char * conc, int * len){
  *len = 0;
  if(base == 0){
    return -2;
  }
  while(*base++ == *conc++){
    (*len)++;
    if(*base == 0 && *conc != 0){
      return -3;
    }
    if(*base == 0 && *conc == 0){
      return -1;
    }
  }

  if(*len == 0 && *base == 0){
    return 1;
  }

  if(*base == 0 && *conc != 0){
    return 2;
  }
  return 1;
}