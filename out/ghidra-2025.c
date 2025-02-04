#include <stdio.h>

#include <stdlib.h>

#include <limits.h>

#include <math.h>

# 1 
void func0(int *param_1,char *param_2){char local_19;int local_18;char *local_10;if (*param_1 == 0) {*param_2 = '0';param_2[1] = '\0';}local_10 = param_2;for (local_18 = *param_1; 0 < local_18; local_18 = local_18 / 0x24) {local_19 = (char)(local_18 % 0x24);if (local_18 % 0x24 < 10) {local_19 = local_19 + '0';}else {local_19 = local_19 + '7';}*local_10 = local_19;local_10 = local_10 + 1;}if (local_10 == param_2) {*local_10 = '0';local_10 = local_10 + 1;}*local_10 = '\0';return;}