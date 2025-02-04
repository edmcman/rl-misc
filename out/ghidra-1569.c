#include <signal.h>

#include <stdlib.h>

#include <stdio.h>

#include <math.h>

#include <assert.h>

#include <errno.h>

#include <sys/types.h>

#include <sys/wait.h>

#include <fcntl.h>              /* Obtain O_* constant definitions */

# 1 
void func0(int *param_1){if (-1 < *param_1) {close(*param_1);*param_1 = -1;}return;}