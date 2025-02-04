#include <string.h>	/* for memcpy() and memset() */

#include <stdio.h>

#include <errno.h>

#include <stdlib.h>

#include <stdint.h>

#include <inttypes.h>

#include <stdio.h>

# 1 
undefined8 func0(long param_1,long param_2){int local_c;local_c = 0;do {if (0xf < local_c) {return 0;}if ((*(byte *)(param_1 + local_c * 2) < 0x30) || (0x39 < *(byte *)(param_1 + local_c * 2))) {if ((*(byte *)(param_1 + local_c * 2) < 0x41) || (0x46 < *(byte *)(param_1 + local_c * 2))) {if ((*(byte *)(param_1 + local_c * 2) < 0x61) || (0x66 < *(byte *)(param_1 + local_c * 2))){return 1;}*(char *)(param_1 + local_c * 2) = *(char *)(param_1 + local_c * 2) + -0x57;}else {*(char *)(param_1 + local_c * 2) = *(char *)(param_1 + local_c * 2) + -0x37;}}else {*(char *)(param_1 + local_c * 2) = *(char *)(param_1 + local_c * 2) + -0x30;}if ((*(byte *)(param_1 + (local_c * 2 + 1)) < 0x30) ||(0x39 < *(byte *)(param_1 + (local_c * 2 + 1)))) {if ((*(byte *)(param_1 + (local_c * 2 + 1)) < 0x41) ||(0x46 < *(byte *)(param_1 + (local_c * 2 + 1)))) {if ((*(byte *)(param_1 + (local_c * 2 + 1)) < 0x61) ||(0x66 < *(byte *)(param_1 + (local_c * 2 + 1)))) {return 1;}*(char *)(param_1 + (local_c * 2 + 1)) = *(char *)(param_1 + (local_c * 2 + 1)) + -0x57;}else {*(char *)(param_1 + (local_c * 2 + 1)) = *(char *)(param_1 + (local_c * 2 + 1)) + -0x37;}}else {*(char *)(param_1 + (local_c * 2 + 1)) = *(char *)(param_1 + (local_c * 2 + 1)) + -0x30;}*(byte *)(param_2 + local_c) =*(char *)(param_1 + local_c * 2) << 4 | *(byte *)(param_1 + (local_c * 2 + 1));local_c = local_c + 1;} while( true );}