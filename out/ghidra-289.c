#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <inttypes.h>

#include <arpa/inet.h>

# 1 
int func0(long param_1,long param_2,int *param_3){int local_18;int local_14;int local_10;int local_c;local_14 = 0;local_10 = 0;do {if (0x1fff < local_10) {return local_14;}local_18 = 0;for (local_c = 0;(local_c < 0x2000 &&(*(char *)(param_1 + (local_c + local_10)) == *(char *)(param_2 + local_c)));local_c = local_c + 1) {local_18 = local_18 + 1;if (local_14 < local_18) {*param_3 = local_10;local_14 = local_18;}if (local_14 == 0xf) break;}local_10 = local_10 + 1;} while( true );}