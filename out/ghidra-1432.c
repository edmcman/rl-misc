#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

#include <unistd.h>

#include <math.h>

#include <sys/time.h>

#include <getopt.h>

#include <string.h>

# 1 
void func0(char param_1,int param_2,int param_3,long param_4,int param_5,long param_6,int param_7,long param_8,int param_9){int local_1c;int local_18;int local_14;int local_10;float local_c;if ((param_1 == 'n') || (param_1 == 't')) {local_14 = param_2;local_10 = param_3;if (param_5 == param_2) {local_14 = param_3;local_10 = param_2;}if (param_1 == 'n') {for (local_1c = 0; local_1c < local_10; local_1c = local_1c + 1) {local_c = 0.0;for (local_18 = 0; local_18 < local_14; local_18 = local_18 + 1) {local_c = *(float *)(param_6 + (long)(local_18 + param_7) * 4) **(float *)(param_4 + (long)(local_18 + local_1c * local_14) * 4) + local_c;}*(float *)(param_8 + (long)(param_9 + local_1c) * 4) = local_c;}}else {for (local_1c = 0; local_1c < local_10; local_1c = local_1c + 1) {local_c = 0.0;for (local_18 = 0; local_18 < local_14; local_18 = local_18 + 1) {local_c = *(float *)(param_6 + (long)(local_18 + param_7) * 4) **(float *)(param_4 + (long)(local_1c + local_18 * local_14) * 4) + local_c;}*(float *)(param_8 + (long)(param_9 + local_1c) * 4) = local_c;}}}return;}