#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

# 1 
ulong func0(long param_1,long param_2){undefined8 local_20;undefined8 local_18;undefined8 local_10;local_18 = 1;local_10 = param_2 - 1;while (local_18 <= local_10) {for (local_20 = 0;(local_20 < local_18 &&(*(long *)(param_1 + local_18 * 8) != *(long *)(param_1 + local_20 * 8)));local_20 = local_20 + 1) {}if (local_20 == local_18) {local_18 = local_18 + 1;}else {*(undefined8 *)(param_1 + local_18 * 8) = *(undefined8 *)(param_1 + local_10 * 8);local_10 = local_10 - 1;}}return local_18;}