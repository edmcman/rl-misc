#include <stdlib.h>

#include <sys/time.h>

# 1 
void func0(long *param_1){long lVar1;lVar1 = *param_1 * 0x6255 + 0x3619;*param_1 = (ulong)(ushort)((short)lVar1 + (short)(lVar1 >> 0x3f)) -((ulong)(lVar1 >> 0x3f) >> 0x30);return;}