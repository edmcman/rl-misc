#include <stdio.h>

#include <string.h>

#include <stdlib.h>

# 1 
static void PHT(unsigned char b[16]) {
 b[0] = (b[0] + (b[1] = (b[1] + b[0]) & 255)) & 255;
 b[2] = (b[2] + (b[3] = (b[3] + b[2]) & 255)) & 255;
 b[4] = (b[4] + (b[5] = (b[5] + b[4]) & 255)) & 255;
 b[6] = (b[6] + (b[7] = (b[7] + b[6]) & 255)) & 255;
 b[8] = (b[8] + (b[9] = (b[9] + b[8]) & 255)) & 255;
 b[10] = (b[10] + (b[11] = (b[11] + b[10]) & 255)) & 255;
 b[12] = (b[12] + (b[13] = (b[13] + b[12]) & 255)) & 255;
 b[14] = (b[14] + (b[15] = (b[15] + b[14]) & 255)) & 255;
}