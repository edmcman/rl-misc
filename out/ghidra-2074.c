#include <stdio.h>

# 1 
void func0(int param_1,char *param_2){char cVar1;int local_20;char *local_18;char *local_10;local_20 = param_1;local_18 = param_2;if (param_1 < 0) {local_20 = -param_1;*param_2 = '-';local_18 = param_2 + 1;}local_10 = local_18;do {*local_10 = (char)local_20 + (char)(local_20 / 10) * -10 + '0';local_20 = local_20 / 10;local_10 = local_10 + 1;} while (local_20 != 0);*local_10 = '\0';for (; local_10 = local_10 + -1, local_18 < local_10; local_18 = local_18 + 1) {cVar1 = *local_18;*local_18 = *local_10;*local_10 = cVar1;}return;}