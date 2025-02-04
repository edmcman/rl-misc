#include <stdio.h>

#include <stdlib.h>

# 1 
void func0(uint param_1,int *param_2,int *param_3){uint uVar1;int iVar2;undefined4 local_1c;uVar1 = (int)param_1 >> 0x1f;iVar2 = 0;for (local_1c = (param_1 ^ uVar1) - uVar1; local_1c != 0; local_1c = local_1c >> 1) {iVar2 = iVar2 + 1;}*param_2 = iVar2;*param_3 = (param_1 + ((uVar1 & 1) << ((byte)iVar2 & 0x1f))) - (uVar1 & 1);return;}