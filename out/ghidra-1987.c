#include <stdio.h>

# 1 
void func0(char *param_1){char *local_10;for (local_10 = param_1; *local_10 != '\0'; local_10 = local_10 + 1) {if ((*local_10 < 'A') || ('Z' < *local_10)) {if (('`' < *local_10) && (*local_10 < '{')) {*local_10 = (char)(*local_10 + -0x54) + (char)((*local_10 + -0x54) / 0x1a) * -0x1a + 'a';}}else {*local_10 = (char)(*local_10 + -0x34) + (char)((*local_10 + -0x34) / 0x1a) * -0x1a + 'A';}}return;}