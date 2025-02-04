#include <pthread.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <stdbool.h>

#include <assert.h>

#include <errno.h>

#include <unistd.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
uint func0(long param_1,int param_2){uint uVar1;int iVar2;iVar2 = param_2 >> 5;uVar1 = *(uint *)(param_1 + (long)iVar2 * 4);*(uint *)(param_1 + (long)iVar2 * 4) =*(uint *)(param_1 + (long)iVar2 * 4) | 1 << ((byte)param_2 & 0x1f);return uVar1 & 1 << ((byte)param_2 & 0x1f);}