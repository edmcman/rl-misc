#include <stdio.h>

#include <math.h>

#include <string.h>

#include <ctype.h>

#include <regex.h>

# 1 
undefined8 func0(long param_1,long param_2){undefined4 local_c;for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {*(undefined8 *)(param_2 + (long)local_c * 8) = *(undefined8 *)((long)local_c * 8 + param_1);}return 0;}