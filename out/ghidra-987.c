#include <stdio.h>

# 1 
void func0(int *param_1,uint *param_2){bool bVar1;if (*param_2 == 0) {*param_1 = 0;}else {bVar1 = false;if ((int)*param_2 < 0) {bVar1 = true;*param_2 = -*param_2;}while ((*param_2 & 0xff800000) == 0) {*param_2 = *param_2 * 2;*param_1 = *param_1 + -1;}while ((*param_2 & 0xff000000) != 0) {*param_2 = (int)*param_2 >> 1;*param_1 = *param_1 + 1;}if (bVar1) {*param_2 = -*param_2;}}return;}