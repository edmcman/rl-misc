#include <signal.h>

#include <stdio.h>

#include <unistd.h>

# 1 
void func0(undefined8 *param_1,uint param_2){*param_1 = 0;if ((param_2 & 1) != 0) {sigaddset((sigset_t *)(param_1 + 1),10);}if ((param_2 & 2) != 0) {sigaddset((sigset_t *)(param_1 + 1),0xc);}sigprocmask(0,(sigset_t *)(param_1 + 1),(sigset_t *)0x0);return;}