#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <float.h>

# 1 
void func0(long param_1,long param_2,long param_3,int param_4){int iVar1;undefined8 uVar2;if (param_2 == 0) {if (param_3 != 0) {for (iVar1 = 0; iVar1 < param_4; iVar1 = iVar1 + 1) {if (*(double *)(param_3 + (long)iVar1 * 8) < *(double *)(param_1 + (long)iVar1 * 8)) {*(undefined8 *)(param_1 + (long)iVar1 * 8) = *(undefined8 *)((long)iVar1 * 8 + param_3);}}}}else if (param_3 == 0) {for (iVar1 = 0; iVar1 < param_4; iVar1 = iVar1 + 1) {if (*(double *)(param_1 + (long)iVar1 * 8) < *(double *)(param_2 + (long)iVar1 * 8)) {*(undefined8 *)(param_1 + (long)iVar1 * 8) = *(undefined8 *)((long)iVar1 * 8 + param_2);}}}else {for (iVar1 = 0; iVar1 < param_4; iVar1 = iVar1 + 1) {if (*(double *)(param_2 + (long)iVar1 * 8) < *(double *)(param_1 + (long)iVar1 * 8)) {if (*(double *)(param_3 + (long)iVar1 * 8) < *(double *)(param_1 + (long)iVar1 * 8)) {if (*(double *)(param_2 + (long)iVar1 * 8) < *(double *)(param_3 + (long)iVar1 * 8)) {uVar2 = *(undefined8 *)(param_3 + (long)iVar1 * 8);}else {uVar2 = *(undefined8 *)(param_2 + (long)iVar1 * 8);}}else {uVar2 = *(undefined8 *)(param_1 + (long)iVar1 * 8);}}else if (*(double *)(param_3 + (long)iVar1 * 8) < *(double *)(param_2 + (long)iVar1 * 8)) {if (*(double *)(param_1 + (long)iVar1 * 8) < *(double *)(param_3 + (long)iVar1 * 8)) {uVar2 = *(undefined8 *)(param_3 + (long)iVar1 * 8);}else {uVar2 = *(undefined8 *)(param_1 + (long)iVar1 * 8);}}else {uVar2 = *(undefined8 *)(param_2 + (long)iVar1 * 8);}*(undefined8 *)(param_1 + (long)iVar1 * 8) = uVar2;}}return;}