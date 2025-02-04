#include <sys/types.h>

#include <stdio.h>

#include <string.h>

#include <syslog.h>

#include <time.h>

# 1 
ulong func0(long param_1,byte param_2){undefined8 local_18;undefined8 local_10;local_18 = 0;for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {local_18 = local_18 |(ulong)*(byte *)(local_10 + param_1) << ((byte)((int)local_10 << 3) & 0x3f);}return (long)((1 << (param_2 & 0x1f)) + -1) & local_18;}