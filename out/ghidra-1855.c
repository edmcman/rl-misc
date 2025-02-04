#include <ctype.h>

#include <stdlib.h>

#include <signal.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <fcntl.h>

# 1 
int func0(double param_1,long param_2,int param_3){undefined8 local_40;undefined4 local_28;undefined8 local_20;local_40 = param_1;if (param_1 < 0.0) {local_40 = 0.0;}if (DAT_00100108 < local_40) {local_40 = DAT_00100108;}local_28 = (int)local_40;if (99 < local_28) {local_28 = 99;}if (local_28 < 99) {local_20 = (double)*(byte *)(param_2 + (long)local_28 + 1);}else {local_20 = DAT_00100110;}return (int)((double)param_3 *((local_40 - (double)local_28) * (local_20 - (double)*(byte *)(param_2 + local_28)) +(double)*(byte *)(param_2 + local_28)) * DAT_00100118);}