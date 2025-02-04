#include <stdlib.h>

#include <stdio.h>

# 1 
void func0(double param_1,long param_2,long param_3,long param_4,long param_5){int local_18;int local_14;int local_10;int local_c;local_18 = 0;local_14 = 0;local_10 = 0;local_c = 0;while (((*(double *)(param_2 + (long)local_18 * 8) != 0.0 ||(*(double *)(param_3 + (long)local_14 * 8) != 0.0)) &&(param_1 <= *(double *)(param_4 + (long)local_10 * 8)))) {if (*(double *)(param_2 + (long)local_18 * 8) <= *(double *)(param_3 + (long)local_14 * 8)) {local_c = local_c + 1;*(int *)((long)local_10 * 4 + param_5) = local_c;*(undefined8 *)(param_4 + (long)local_10 * 8) = *(undefined8 *)((long)local_18 * 8 + param_2);local_18 = local_18 + 1;local_10 = local_10 + 1;}else {local_c = local_c + -1;*(int *)((long)local_10 * 4 + param_5) = local_c;*(undefined8 *)(param_4 + (long)local_10 * 8) = *(undefined8 *)((long)local_14 * 8 + param_3);local_14 = local_14 + 1;local_10 = local_10 + 1;}}return;}