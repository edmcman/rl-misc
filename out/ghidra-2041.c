#include <sys/types.h>

#include <sys/ipc.h>

#include <sys/shm.h>

#include <unistd.h>

#include <fcntl.h>

#include <errno.h>

# 1 
void func0(int *param_1){if (*param_1 != -1) {close(*param_1);*param_1 = -1;}return;}