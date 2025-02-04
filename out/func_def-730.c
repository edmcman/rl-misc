#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
void alu_main_reset(char rega[], char regb[], char accumulator[], char flags[]){
  int i;

  for(i=0; i<8; i++){
    rega[i] = '0';
    regb[i] = '0';
    accumulator[i] = '0';
    flags[i] = '0';
  }
}