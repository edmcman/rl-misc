#include <ctype.h>

#include <stdbool.h>

#include <stdint.h>

#include <string.h>

# 1 
int func0(char *param_1,int *param_2){char cVar1;int iVar2;int local_14;int local_10;local_14 = 0;local_10 = 0;cVar1 = *param_1;if (((cVar1 == 'O') || (cVar1 == 'o')) || (cVar1 == '0')) {do {local_14 = local_14 + 1;iVar2 = local_10 + 1;if (param_1[local_10 + 1] == '-') {iVar2 = local_10 + 2;}local_10 = iVar2;} while (cVar1 == param_1[local_10]);}if ((local_10 != local_14) && (local_10 != local_14 * 2 + -1)) {local_14 = 0;local_10 = 0;}*param_2 = local_10;return local_14;}