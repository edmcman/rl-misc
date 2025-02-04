#include <stdint.h>

#include <stdlib.h>

#include <string.h>

#include <assert.h>

#include <openssl/rc4.h>

# 1 
undefined8 func0(undefined *param_1,undefined4 param_2){*param_1 = (char)param_2;param_1[1] = (char)((uint)param_2 >> 8);param_1[2] = (char)((uint)param_2 >> 0x10);param_1[3] = (char)((uint)param_2 >> 0x18);return 4;}