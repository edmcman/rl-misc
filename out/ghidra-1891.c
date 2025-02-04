#include <curses.h>

#include <stdlib.h>

#include <string.h>

#include <stdio.h>

#include <ctype.h>

# 1 
void func0(char *param_1){char *local_10;local_10 = param_1;if (*param_1 == '\0') {*param_1 = '/';param_1[1] = '\0';}for (; *local_10 != '\0'; local_10 = local_10 + 1) {}if (local_10[-1] != '/') {*local_10 = '/';local_10[1] = '\0';}return;}