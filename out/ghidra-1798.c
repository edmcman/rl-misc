#include <stdlib.h>

#include <unistd.h>

#include <float.h>

#include <math.h>

# 1 
int func0(float param_1,long param_2,int param_3){undefined4 local_38;undefined4 local_1c;undefined4 local_18;local_38 = param_1;if (param_1 < 0.0) {local_38 = 0.0;}if (DAT_00100100 < local_38) {local_38 = DAT_00100100;}local_1c = (int)local_38;if (99 < local_1c) {local_1c = 99;}if (local_1c < 99) {local_18 = (float)*(byte *)(param_2 + (long)local_1c + 1);}else {local_18 = DAT_00100104;}return (int)((float)param_3 *((local_38 - (float)local_1c) * (local_18 - (float)*(byte *)(param_2 + local_1c)) +(float)*(byte *)(param_2 + local_1c)) * DAT_00100108);}