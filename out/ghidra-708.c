#include <stdio.h>

#include <string.h>

#include <stdarg.h>

#include <unistd.h>

#include <fcntl.h>

# 1 
long func0(int param_1,long param_2){int iVar1;undefined uVar2;undefined4 local_1c;undefined4 local_10;undefined4 local_c;local_10 = 0;local_1c = param_1;iVar1 = local_10;do {local_10 = iVar1;iVar1 = local_10 + 1;*(char *)(param_2 + local_10) = (char)local_1c + (char)(local_1c / 10) * -10 + '0';local_1c = local_1c / 10;} while (local_1c != 0);*(undefined *)(param_2 + iVar1) = 0;for (local_c = 0; local_c < iVar1 / 2; local_c = local_c + 1) {uVar2 = *(undefined *)(param_2 + local_c);*(undefined *)(param_2 + local_c) = *(undefined *)(param_2 + (local_10 - local_c));*(undefined *)((local_10 - local_c) + param_2) = uVar2;}return param_2;}