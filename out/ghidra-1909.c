#include <stdio.h>

#include <stdlib.h>

#include <errno.h>

#include <stdio.h>

#include <string.h>

#include <sys/param.h>

#include <sys/types.h>

#include <sys/socket.h>

#include <sys/un.h>

#include <unistd.h>

# 1 
int func0(byte *param_1){return (uint)*param_1 + (uint)param_1[1] * 0x100 + (uint)param_1[2] * 0x10000 +(uint)param_1[3] * 0x1000000;}