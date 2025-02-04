#include <stdint.h>

#include <stdio.h>

# 1 
undefined4 func0(int *param_1){undefined4 local_c;local_c = 7;switch(*param_1 / 100) {case 0:return 0;case 1:local_c = 10;break;case 2:local_c = 10;break;case 3:local_c = 0xc;break;case 4:local_c = 0xb;break;case 5:local_c = 0xb;break;case 6:local_c = 10;break;case 7:local_c = 0xc;break;case 8:local_c = 0xc;break;case 9:local_c = 0xb;}*param_1 = *param_1 % 100;return local_c;}