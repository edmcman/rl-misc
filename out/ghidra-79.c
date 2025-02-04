#include <stdio.h> // sprintf

#include <assert.h> // assert

# 1 
long func0(int param_1,char *param_2){char *pcVar1;char cVar2;int iVar3;char *local_48;int local_3c;int local_28;char *local_18;local_48 = param_2;local_3c = param_1;if (param_1 < 0) {local_48 = param_2 + 1;*param_2 = '-';local_3c = -param_1;}local_18 = local_48;do {iVar3 = local_3c / 10;pcVar1 = local_18 + 1;*local_18 = (char)local_3c + (char)iVar3 * -10 + '0';local_3c = iVar3;local_18 = pcVar1;} while (iVar3 != 0);*pcVar1 = '\0';iVar3 = (int)pcVar1 - (int)local_48;for (local_28 = 0; local_28 < iVar3 / 2; local_28 = local_28 + 1) {cVar2 = local_48[local_28];local_48[local_28] = local_48[(iVar3 + -1) - local_28];local_48[(iVar3 + -1) - local_28] = cVar2;}return (long)pcVar1 - (long)param_2;}