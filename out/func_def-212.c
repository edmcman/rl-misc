#include <math.h>

#include <string.h>

#include <time.h>

#include <stdlib.h>

#include <stdio.h>

# 1 
static void read_2fsk(struct Flex * flex, unsigned int sym, unsigned int * dat) {
  if (flex==NULL) return;
  *dat = (*dat >> 1) | ((sym > 1)?0x80000000:0);
}