#include <sys/mman.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <unistd.h>

#include <errno.h>

#include <sys/syscall.h>

#include <stdarg.h>

# 1 
long func0(long param_1,int param_2){int iVar1;undefined uVar2;undefined4 local_24;undefined4 local_10;undefined4 local_c;local_10 = 0;local_c = 0;local_24 = param_2;do {iVar1 = local_10 + 1;*(char *)(param_1 + local_10) = (char)local_24 + (char)(local_24 / 10) * -10 + '0';local_24 = local_24 / 10;local_10 = iVar1;} while (local_24 != 0);*(undefined *)(param_1 + iVar1) = 0;while (local_c < local_10 + -1) {local_10 = local_10 + -1;uVar2 = *(undefined *)(param_1 + local_10);*(undefined *)(param_1 + local_10) = *(undefined *)(param_1 + local_c);*(undefined *)(local_c + param_1) = uVar2;local_c = local_c + 1;}return param_1 + (long)local_c + (long)local_10;}