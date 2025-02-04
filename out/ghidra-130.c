#include <stdlib.h> */

#include <stdio.h>

#include <string.h>

# 1 
void func0(uint *param_1,uint *param_2){uint uVar1;uint uVar2;int iVar3;int iVar4;uVar1 = *param_1;uVar2 = *param_2;if ((byte)uVar1 < 0x5f) {iVar3 = 0x70;}else {iVar3 = 0xb0;}if ((uVar1 & 1) == 0) {iVar4 = 0x7e;}else if ((byte)uVar2 < 0x60) {iVar4 = 0x1f;}else {iVar4 = 0x20;}*param_1 = iVar3 + ((int)((uVar1 & 0xff) + 1) >> 1);*param_2 = iVar4 + (uVar2 & 0xff);return;}