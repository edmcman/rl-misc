#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#include <ctype.h>

#include <math.h>

#include <limits.h>

# 1 
int func0(char *param_1){char cVar1;int iVar2;int local_10;int local_c;local_c = 0;do {if (2 < local_c) {if ((int)param_1[2] * (int)*param_1 * (int)param_1[1] == 0) {local_10 = 0;}else {local_10 = (param_1[2] + -1) * 4 + (*param_1 + -1) * 0x10 + (int)param_1[1];}return local_10;}cVar1 = param_1[local_c];iVar2 = (int)cVar1;if (cVar1 == '\0') {return 0;}if (((cVar1 < '\0') || (0x75 < iVar2)) || (iVar2 < 0x41)) {switchD_00100078_caseD_42:param_1[local_c] = '\0';}else {switch(iVar2) {case 0x41:case 0x61:param_1[local_c] = '\x03';break;default:goto switchD_00100078_caseD_42;case 0x43:case 99:param_1[local_c] = '\x02';break;case 0x47:case 0x67:param_1[local_c] = '\x04';break;case 0x54:case 0x55:case 0x74:case 0x75:param_1[local_c] = '\x01';}}local_c = local_c + 1;} while( true );}