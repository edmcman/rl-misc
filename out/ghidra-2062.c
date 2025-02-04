#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

#include <string.h>

# 1 
void func0(char *param_1,char *param_2){char *local_18;char *local_10;local_18 = param_2;local_10 = param_1;do {if (*local_18 == '\0') {*local_10 = '\0';return;}if (*local_18 == '\\') {local_18 = local_18 + 1;if (*local_18 == '\\') {*local_10 = '\\';}else if (*local_18 == '#') {*local_10 = '#';}else {*local_10 = (&DAT_001000e0)[(int)*local_18 & 0x1f];}}else {if (*local_18 == '#') {*local_10 = '\0';return;}*local_10 = *local_18;}local_10 = local_10 + 1;local_18 = local_18 + 1;} while( true );}