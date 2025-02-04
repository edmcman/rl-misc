#include <openssl/dh.h>

#include <openssl/pem.h>

#include <openssl/bn.h>

# 1 
void func0(long param_1,long param_2,int param_3){char cVar1;int local_10;local_10 = 0;do {if (param_3 <= local_10) {return;}cVar1 = *(char *)(param_2 + local_10);if ((cVar1 < 'a') || ('z' < cVar1)) {if (((cVar1 < '0') || ('9' < cVar1)) && ((cVar1 < 'A' || ('Z' < cVar1)))) {if (cVar1 == '\0') {*(undefined *)(param_1 + local_10) = 0;return;}*(undefined *)(param_1 + local_10) = 0x5f;}else {*(char *)(param_1 + local_10) = cVar1;}}else {*(char *)(param_1 + local_10) = cVar1 + -0x20;}local_10 = local_10 + 1;} while( true );}