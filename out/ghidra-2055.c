#include <limits.h>

#include <wchar.h>

#include <stdio.h>

#include <printf.h>

#include <locale.h>

# 1 
undefined8 func0(long param_1,long param_2,int *param_3){int iVar1;undefined8 uVar2;if (param_2 == 0) {uVar2 = 0xffffffff;}else {if ((*(byte *)(param_1 + 0xc) & 1) == 0) {if ((*(byte *)(param_1 + 0xc) & 4) == 0) {if ((*(byte *)(param_1 + 0xd) & 2) == 0) {iVar1 = (*(byte *)(param_1 + 0xc) & 2) << 9;}else {iVar1 = 1;}}else {iVar1 = 0x200;}}else {iVar1 = 0x100;}*param_3 = iVar1;uVar2 = 1;}return uVar2;}