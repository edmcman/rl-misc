#include <stdio.h>

#include <stdlib.h>

#include <locale.h> // установка русской локали (нужна для ОС Windows)

# 1 
void func0(int *param_1,int *param_2){int iVar1;if (*param_2 < *param_1) {iVar1 = *param_1;*param_1 = *param_2;*param_2 = iVar1;}return;}