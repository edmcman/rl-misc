#include <stdio.h>

# 1 
static void poke16(volatile unsigned short *addr, unsigned short val) {



 *addr = val;
}