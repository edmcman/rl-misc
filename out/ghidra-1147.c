#include <string.h>

#include <errno.h>

#include <stdlib.h>

# 1 
long func0(long param_1,long param_2){undefined8 local_10;if (param_1 == 0) {param_1 = 0;}else {local_10 = 0;if (param_2 != 0) {for (; *(char *)(local_10 + param_2) != '\0'; local_10 = local_10 + 1) {*(undefined *)(local_10 + param_1) = *(undefined *)(local_10 + param_2);}}*(undefined *)(local_10 + param_1) = 0;}return param_1;}