#include <stddef.h>

#include <assert.h>

#include <stdint.h>

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#include <math.h>

# 1 
void func0(ulong *param_1,byte param_2,int param_3){if (param_3 == 0) {*param_1 = ~(1L << (param_2 & 0x3f)) & *param_1;}else {*param_1 = 1L << (param_2 & 0x3f) | *param_1;}return;}