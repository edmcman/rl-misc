#include <ncurses.h>

# 1 
bool func0(int param_1,int param_2,int *param_3,int param_4){int iVar1;int local_14;if (param_1 < param_2) {local_14 = param_2 - param_1;if (param_4 + *param_3 < 0) {local_14 = 0;}else if (param_4 + *param_3 < local_14) {local_14 = param_4 + *param_3;}}else {local_14 = 0;}iVar1 = *param_3;*param_3 = local_14;return iVar1 != local_14;}