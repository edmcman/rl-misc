#include <stdio.h> // fputc(), etc

#include <stdlib.h> // exit()

#include <unistd.h> // write(), lseek()

#include <string.h> // strncmp(), strlen()

#include <fcntl.h> // open(), fcntl()

#include <sys/stat.h> // S_IRUSR, S_IWUSR

#include <math.h> // log()

# 1 
int func0(int param_1,long *param_2){ssize_t sVar1;long in_FS_OFFSET;byte local_15;int local_14;long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);*param_2 = 0;local_14 = 0;do {*param_2 = *param_2 << 7;sVar1 = read(param_1,&local_15,1);local_14 = local_14 + (int)sVar1;*param_2 = (ulong)(local_15 & 0x7f) + *param_2;} while ((char)local_15 < '\0');if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {/* WARNING: Subroutine does not return */__stack_chk_fail();}return local_14;}