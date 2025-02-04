#include <stdbool.h>

#include <stdio.h>

#include <stdlib.h>

# 1 
void func0(int *param_1){bool bVar1;int iVar2;bVar1 = false;*param_1 = 0;iVar2 = getchar_unlocked();if (iVar2 == 0x2d) {bVar1 = true;iVar2 = getchar_unlocked();}while ((0x2f < iVar2 && (iVar2 < 0x3a))) {*param_1 = *param_1 * 10 + iVar2 + -0x30;iVar2 = getchar_unlocked();}if (bVar1) {*param_1 = -*param_1;}return;}