#include <X11/IntrinsicP.h>

#include <X11/StringDefs.h>

#include <X11/Shell.h>

#include <X11/CompositeP.h>

#include <stdio.h>

# 1 
undefined4 func0(undefined8 param_1,uint *param_2,uint *param_3){undefined4 local_c;local_c = 1;*param_2 = *param_2 & 0xc;if (*param_2 == 0) {local_c = 0;}else {if ((*param_2 & 8) != 0) {if (*(ushort *)((long)param_2 + 10) < 300) {local_c = 2;*(undefined2 *)((long)param_3 + 10) = 300;*param_3 = *param_3 & 8;}else {local_c = 0;}}if ((*param_2 & 4) != 0) {if (*(ushort *)(param_2 + 2) < 300) {local_c = 2;*(undefined2 *)(param_3 + 2) = 300;*param_3 = *param_3 & 4;}else {local_c = 0;}}}return local_c;}