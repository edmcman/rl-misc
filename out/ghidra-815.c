#include <stdio.h>

#include <string.h>

#include <ctype.h>

#include <stdarg.h>

#include <stdlib.h>

#include <time.h>

#include <unistd.h>

#include <malloc.h>

# 1 
long func0(long param_1){int local_c;if (param_1 != 0) {for (local_c = 0; *(char *)(param_1 + local_c) != '\0'; local_c = local_c + 1) {if (('`' < *(char *)(param_1 + local_c)) && (*(char *)(param_1 + local_c) < '{')) {*(char *)(param_1 + local_c) = *(char *)(param_1 + local_c) + -0x20;}}}return param_1;}