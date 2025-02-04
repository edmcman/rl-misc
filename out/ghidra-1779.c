#include <stdio.h>

#include <stdint.h>

#include <string.h>

#include <stdlib.h>

#include <errno.h>

# 1 
undefined8 func0(long param_1,long param_2){int local_c;local_c = 0;while( true ) {if (7 < local_c) {return 0;}if (*(byte *)(param_2 + local_c) < *(byte *)(param_1 + local_c)) break;if (*(byte *)(param_1 + local_c) < *(byte *)(param_2 + local_c)) {return 0xffffffff;}local_c = local_c + 1;}return 1;}