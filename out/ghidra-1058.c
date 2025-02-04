#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
undefined8 func0(float param_1,float *param_2,int *param_3,int *param_4,int *param_5,int *param_6){int iVar1;int iVar2;int iVar3;int iVar4;undefined8 uVar5;undefined4 local_44;undefined4 local_34;iVar4 = (int)param_1;if (0.0 <= param_1) {uVar5 = 1;local_34 = 0.0;local_44 = param_1;}else {iVar4 = -iVar4;local_44 = (float)((uint)param_1 ^ DAT_00100290);uVar5 = 0xffffffff;local_34 = DAT_001002a0;}iVar1 = (int)(DAT_001002a8 * (double)local_44) % 10;iVar3 = (int)(DAT_001002b0 * (double)local_44) % 10;iVar2 = (int)(DAT_001002b8 * (double)local_44) % 10;if (iVar4 < 100) {if (iVar4 < 10) {local_34 = DAT_001002c4 + local_34;if (((iVar2 == 0) && (local_34 = local_34 - DAT_001002c8, iVar3 == 0)) &&(local_34 = local_34 - DAT_001002c8, iVar1 == 0)) {local_34 = local_34 - DAT_001002c8;}}else {iVar2 = 0;local_34 = DAT_001002c4 + local_34;if ((iVar3 == 0) && (local_34 = local_34 - DAT_001002c8, iVar1 == 0)) {local_34 = local_34 - DAT_001002c8;}}}else {iVar3 = 0;iVar1 = 0;local_34 = DAT_001002c0 + local_34;iVar2 = iVar3;}*param_3 = iVar4;*param_4 = iVar1;*param_5 = iVar3;*param_6 = iVar2;if (DAT_001002cc <= local_34) {*param_2 = local_34;}else {*param_2 = DAT_001002cc;}return uVar5;}