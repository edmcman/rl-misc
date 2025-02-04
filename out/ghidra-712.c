#include <string.h>

#include <ctype.h>

#include <stdlib.h>

#include <stdio.h>

# 1 
void func0(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4){char *local_10;local_10 = param_1 + 1;*param_4 = *param_1;do {if (*local_10 == '\0') {LAB_00100089:param_4[2] = *param_2;param_4[3] = *param_3;param_4[4] = 0;return;}if ((((*local_10 == 'A') || (*local_10 == 'E')) || (*local_10 == 'I')) ||((*local_10 == 'O' || (*local_10 == 'U')))) {param_4[1] = *local_10;goto LAB_00100089;}local_10 = local_10 + 1;} while( true );}