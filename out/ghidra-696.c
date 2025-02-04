#include <curses.h>

#include <stdlib.h>

# 1 
void func0(char *param_1,char *param_2){char *local_18;char *local_10;if ((param_1 != (char *)0x0) && (local_18 = param_2, local_10 = param_1, param_2 != (char *)0x0)){for (; *local_18 != '\0'; local_18 = local_18 + 1) {*local_10 = *local_18;local_10 = local_10 + 1;}}return;}