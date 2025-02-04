#include <stdio.h>

#include <math.h>

#include <complex.h>

# 1 
undefined4 func0(int param_1,int *param_2){undefined4 local_14;undefined8 local_10;if (param_1 < 1) {local_14 = 2;}else if (param_1 == 1) {*param_2 = 0;local_14 = 0;}else {local_14 = 1;*param_2 = 0;for (local_10 = (double)param_1; DAT_001000b8 <= local_10; local_10 = local_10 / DAT_001000b8) {*param_2 = *param_2 + 1;if (local_10 == DAT_001000b8) {local_14 = 0;}}}return local_14;}