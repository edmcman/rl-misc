#include <ctype.h>

#include <stdarg.h>

#include <dirent.h>

#include <sys/stat.h>

#include <sys/time.h>

#include <sys/types.h>

#include <time.h>

# 1 
undefined4 func0(int param_1,int *param_2){undefined4 local_1c;undefined4 local_c;local_c = 0;if ((param_1 < 1) || (0x72 < param_1)) {local_1c = 0;}else if (param_1 < 0x21) {local_c = 1;local_1c = param_1;}else {local_1c = param_1 + -0x20;if (local_1c < 0x19) {local_c = 4;}else {local_1c = param_1 + -0x38;if (local_1c < 1) {local_c = 8;local_1c = param_1 + -0x39;}else if (local_1c < 1) {local_c = 0x10;local_1c = param_1 + -0x39;}else if (local_1c < 0x24) {local_c = 0x20;}else if (param_1 + -0x5b < 1) {local_c = 0x40;local_1c = param_1 + -0x5c;}else if (param_1 + -0x5b < 0x18) {local_c = 2;local_1c = param_1 + 0x1c;}else {local_1c = 0;}}}if (param_2 != (int *)0x0) {*param_2 = local_1c;}return local_c;}