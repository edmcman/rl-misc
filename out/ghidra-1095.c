#include <stdlib.h> */

#include <stdio.h>

#include <string.h>

# 1 
void func0(uint *param_1,int *param_2){int iVar1;int iVar2;byte bVar3;bVar3 = (byte)*param_2;if ((byte)*param_1 < 0xa0) {iVar1 = 0x70;}else {iVar1 = 0xb0;}if (bVar3 < 0x9f) {if ((char)bVar3 < '\0') {iVar2 = 0x20;}else {iVar2 = 0x1f;}}else {iVar2 = 0x7e;}*param_1 = ((*param_1 & 0xff) - iVar1) * 2 - (uint)(bVar3 < 0x9f);*param_2 = *param_2 - iVar2;return;}