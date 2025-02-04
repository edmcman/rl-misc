#include <time.h>

# 1 
int func0(char *param_1,long param_2){bool bVar1;int local_c;local_c = 0;bVar1 = false;if (param_2 == 3) {while ((!bVar1 && (local_c < 7))) {if ((*param_1 == (&DAT_001000d0)[(long)local_c * 3]) &&((param_1[1] == (&DAT_001000d1)[(long)local_c * 3] &&(param_1[2] == (&DAT_001000d2)[(long)local_c * 3])))) {bVar1 = true;}else {local_c = local_c + 1;}}}if (!bVar1) {local_c = -1;}return local_c;}