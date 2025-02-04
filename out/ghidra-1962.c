#include <sys/types.h>

#include <err.h>

#include <errno.h>

#include <inttypes.h>

#include <limits.h>

#include <locale.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <unistd.h>

#include <wchar.h>

# 1 
undefined8 func0(char *param_1,int param_2,long *param_3){char cVar1;int iVar2;char *local_30;char local_1d;int local_1c;char *local_18;local_30 = param_1;local_18 = param_1;do {cVar1 = *local_30;if (cVar1 == '\0') {*local_18 = '\0';*param_3 = (long)local_18 - (long)param_1;return 0;}if (cVar1 != '\\') {*local_18 = cVar1;goto LAB_001001fd;}local_30 = local_30 + 1;cVar1 = *local_30;iVar2 = (int)cVar1;if (cVar1 == '\0') {*local_18 = '\\';local_18[1] = '\0';*param_3 = (long)(local_18 + 1) - (long)param_1;return 0;}if (((cVar1 < '\0') || (0x76 < iVar2)) || (iVar2 < 0x27)) {switchD_00100096_caseD_28:*local_18 = *local_30;}else {switch(iVar2) {case 0x27:case 0x5c:*local_18 = *local_30;break;default:goto switchD_00100096_caseD_28;case 0x30:case 0x31:case 0x32:case 0x33:case 0x34:case 0x35:case 0x36:case 0x37:if ((param_2 == 0) && (*local_30 == '0')) {local_1d = '\x04';}else {local_1d = '\x03';}local_1c = 0;for (; ((local_1d != '\0' && ('/' < *local_30)) && (*local_30 < '8'));local_30 = local_30 + 1) {local_1c = local_1c * 8 + *local_30 + -0x30;local_1d = local_1d + -1;}local_30 = local_30 + -1;if ((param_2 == 0) || (local_1c != 0x25)) {*local_18 = (char)local_1c;}else {*local_18 = '%';local_18[1] = '%';local_18 = local_18 + 1;}break;case 0x61:*local_18 = '\a';break;case 0x62:*local_18 = '\b';break;case 99:*local_18 = '\0';*param_3 = (long)local_18 - (long)param_1;return 1;case 0x66:*local_18 = '\f';break;case 0x6e:*local_18 = '\n';break;case 0x72:*local_18 = '\r';break;case 0x74:*local_18 = '\t';break;case 0x76:*local_18 = '\v';}}LAB_001001fd:local_30 = local_30 + 1;local_18 = local_18 + 1;} while( true );}