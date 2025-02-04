#include <stdio.h>

# 1 
int func0(EVP_PKEY_CTX *dst,EVP_PKEY_CTX *src){int iVar1;int local_c;local_c = 0;do {iVar1 = local_c + 1;dst[iVar1] = src[local_c];local_c = iVar1;} while (dst[iVar1] != (EVP_PKEY_CTX)0x0);return 0;}