#include <fcntl.h>

#include <sys/mman.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <unistd.h>

# 1 
void func0(void *param_1,char *param_2,char param_3,long param_4){if (param_3 != '\0') {unlink(param_2);}munmap(param_1,param_4 * 4);return;}