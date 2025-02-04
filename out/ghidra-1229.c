#include <stdio.h> //For Standatd I/O Operations.

#include <stdlib.h> //For Exit() Function.

#include <string.h> //For strrev() and strlen() functions.

#include <stdbool.h> //For _Bool Boolean.

#include <ctype.h> //For isUpper(). isLower()

#include <time.h> //For Clock .

#include <math.h> //For pow().

# 1 
long func0(long param_1){long lVar1;int *piVar2;long in_FS_OFFSET;int local_420;int local_41c;int local_418 [258];long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);piVar2 = local_418;for (lVar1 = 0x80; lVar1 != 0; lVar1 = lVar1 + -1) {piVar2[0] = 0;piVar2[1] = 0;piVar2 = piVar2 + 2;}local_41c = 0;for (local_420 = 0; *(char *)(param_1 + local_420) != '\0'; local_420 = local_420 + 1) {if (local_418[(int)*(char *)(param_1 + local_420)] == 0) {local_418[(int)*(char *)(param_1 + local_420)] = 1;*(undefined *)(param_1 + local_41c) = *(undefined *)(param_1 + local_420);local_41c = local_41c + 1;}}*(undefined *)(param_1 + local_41c) = 0;if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {/* WARNING: Subroutine does not return */__stack_chk_fail();}return param_1;}