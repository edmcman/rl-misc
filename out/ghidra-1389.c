#include <stdio.h>

#include <stdlib.h>

# 1 
int func0(float param_1,float *param_2,int param_3){bool bVar1;int iVar2;int local_1c;int local_18;int local_14;bVar1 = false;local_18 = 0;local_1c = param_3 + 1;iVar2 = local_18;if (param_3 == 1) {bVar1 = true;}else if (*param_2 < param_2[1]) {bVar1 = true;}while (local_18 = iVar2, 1 < local_1c - local_18) {iVar2 = local_18 + local_1c >> 1;if (((param_1 < param_2[(long)iVar2 + -1]) || (!bVar1)) &&((param_2[(long)iVar2 + -1] < param_1 || (bVar1)))) {local_1c = iVar2;iVar2 = local_18;}}if (*param_2 == param_1) {local_14 = 1;}else if (param_2[(long)param_3 + -1] == param_1) {local_14 = param_3 + -1;}else {local_14 = local_18;}return local_14 + -1;}