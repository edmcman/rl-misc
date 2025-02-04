#include <stdio.h>

# 1 
void func0(char *__block,int __edflag){int *piVar1;undefined4 in_register_00000034;piVar1 = (int *)CONCAT44(in_register_00000034,__edflag);*(int *)__block = *(int *)__block + 1;*piVar1 = *piVar1 + 1;if (*(int *)__block == 5) {__block[0] = '\0';__block[1] = '\0';__block[2] = '\0';__block[3] = '\0';}else if (*piVar1 == 5) {*piVar1 = 0;}return;}