#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
int func0(long param_1,long param_2,int param_3){undefined4 local_1c;undefined4 local_18;undefined4 local_14;local_14 = 0;local_1c = 0;local_18 = 0;while ((*(char *)(param_2 + local_18) != '\0' && (local_1c < param_3 + -1))) {if (*(char *)(param_2 + local_18) < '\0') {if (*(byte *)(param_2 + local_18) < 0xe0) {if ((*(byte *)(param_2 + local_18) & 0x1c) == 0) {*(byte *)(param_1 + local_1c) =(byte)((int)*(char *)(param_2 + local_18) << 6) |*(byte *)(param_2 + (local_18 + 1)) & 0x3f;local_14 = local_14 + 1;local_1c = local_1c + 1;}local_18 = local_18 + 2;}else if (*(byte *)(param_2 + local_18) < 0xf0) {local_18 = local_18 + 3;}else if (*(byte *)(param_2 + local_18) < 0xf8) {local_18 = local_18 + 4;}}else {*(undefined *)(local_1c + param_1) = *(undefined *)(local_18 + param_2);local_14 = local_14 + 1;local_1c = local_1c + 1;local_18 = local_18 + 1;}}*(undefined *)(param_1 + local_1c) = 0;return local_14;}