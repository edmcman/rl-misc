#include <stdlib.h>

#include <assert.h>

#include <sys/eventfd.h>

#include <errno.h>

#include <unistd.h>

# 1 
void func0(int *param_1){close(*param_1);*param_1 = 0;return;}