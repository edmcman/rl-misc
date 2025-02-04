#include <stdio.h>

#include <string.h>

# 1 
undefined8 func0(long param_1,uint param_2,int param_3){undefined8 uVar1;undefined4 local_18;undefined4 local_14;if ((param_3 == 2) || (param_3 == 1)) {if (param_1 == 0) {uVar1 = 0xffffffff;}else if (param_2 < 0x110000) {if ((param_2 < 0xd800) || (0xdfff < param_2)) {for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {if (param_3 == 2) {local_14 = local_18;}else {local_14 = 3 - local_18;}*(char *)(param_1 + local_14) =(char)((param_2 << ((byte)(local_18 << 3) & 0x1f)) >> 0x18);}uVar1 = 4;}else {uVar1 = 0xfffffff0;}}else {uVar1 = 0xfffffff0;}}else {uVar1 = 0xfffffffc;}return uVar1;}