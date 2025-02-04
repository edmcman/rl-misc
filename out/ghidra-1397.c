#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <time.h>

#include <string.h>

#include <ctype.h>

# 1 
void func0(long param_1,long param_2,int *param_3,int *param_4,int param_5){char local_15;int local_14;int local_10;int local_c;local_14 = 0;local_c = 0;local_15 = '\0';for (local_10 = 0; *(char *)(param_1 + local_10) != '\0'; local_10 = local_10 + 1) {if (local_15 == '\0') {if ((*(char *)(param_1 + local_10) == '\'') || (*(char *)(param_1 + local_10) == '\"')) {local_15 = *(char *)(param_1 + local_10);}else if (*(char *)(param_1 + local_10) == '(') {local_14 = local_14 + 1;if (((local_14 == 1) && (param_2 != 0)) && ((param_5 < 0 || (local_c < param_5)))) {*(int *)((long)local_c * 4 + param_2) = local_10;local_c = local_c + 1;}}else if (*(char *)(param_1 + local_10) == ')') {local_14 = local_14 + -1;if (local_14 == 0) break;}else if ((((*(char *)(param_1 + local_10) == ',') && (local_14 == 1)) && (param_2 != 0)) &&((param_5 < 0 || (local_c < param_5)))) {*(int *)((long)local_c * 4 + param_2) = local_10;local_c = local_c + 1;}}else if ((local_15 == *(char *)(param_1 + local_10)) &&(*(char *)(param_1 + (long)local_10 + -1) != '\\')) {local_15 = '\0';}}if (*(char *)(param_1 + local_10) == '\0') {if (param_3 != (int *)0x0) {*param_3 = -1;}if (param_4 != (int *)0x0) {*param_4 = -1;}}else {if ((param_2 != 0) && ((param_5 < 0 || (local_c < param_5)))) {*(int *)((long)local_c * 4 + param_2) = local_10;local_c = local_c + 1;}if (param_3 != (int *)0x0) {*param_3 = local_c + -1;}if (param_4 != (int *)0x0) {*param_4 = local_10;}}return;}