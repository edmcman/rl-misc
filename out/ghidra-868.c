#include <stdio.h>

#include <string.h>

#include <stdbool.h>

#include <unistd.h>

# 1 
int func0(undefined *param_1,int param_2){int local_14;int local_10;int local_c;if (param_2 == 0) {*param_1 = 0;local_14 = 1;}else {local_14 = 5;local_10 = 4;while ((local_c = local_14, -1 < local_10 &&(param_2 >> ((char)(local_10 << 3) - (char)local_10 & 0x1fU) == 0))) {local_14 = local_14 + -1;local_10 = local_10 + -1;}while (local_c = local_c + -1, -1 < local_c) {if (local_c == 0) {param_1[(long)local_14 + -1] = (byte)(param_2 >> (-(char)local_c & 0x1fU)) & 0x7f;}else {param_1[((long)local_14 - (long)local_c) + -1] =((byte)(param_2 >> ((char)local_c * '\a' & 0x1fU)) & 0x7f) + 0x80;}}}return local_14;}