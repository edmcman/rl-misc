#include <stdio.h>

#include <stdlib.h>

#include <pthread.h>

#include <unistd.h>

# 1 
void func0(int *param_1,int param_2){sleep(1);*param_1 = *param_1 + param_2;return;}