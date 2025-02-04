#include <stdio.h>

#include <math.h>

#include <string.h>

#include <ctype.h>

#include <regex.h>

# 1 
undefined8 func0(long param_1,long param_2,long param_3){undefined4 local_1c;undefined4 local_18;undefined4 local_14;undefined8 local_10;for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {local_10 = 0.0;for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {local_10 = *(double *)(param_1 + (long)(local_14 + local_18 * 4) * 8) **(double *)(param_2 + (long)(local_1c + local_14 * 4) * 8) + local_10;}*(double *)(param_3 + (long)(local_1c + local_18 * 4) * 8) = local_10;}}return 0;}