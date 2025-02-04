#include <stdio.h>

#include <string.h>

# 1 
undefined8 func0(long param_1,long param_2){bool bVar1;int local_14;int local_10;local_10 = 0;do {if (*(char *)(param_1 + local_10) == '\0') {return 1;}bVar1 = false;for (local_14 = 0; *(char *)(param_2 + local_14) != '\0'; local_14 = local_14 + 1) {if (*(char *)(param_1 + local_10) == *(char *)(param_2 + local_14)) {bVar1 = true;*(undefined *)(param_2 + local_14) = 0x2b;break;}}if ((*(char *)(param_2 + local_14) == '\0') && (!bVar1)) {return 0;}local_10 = local_10 + 1;} while( true );}