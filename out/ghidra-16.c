#include <stdio.h>

#include <string.h>

#include <stdlib.h>

# 1 
int func0(EVP_PKEY_CTX *dst,EVP_PKEY_CTX *src){EVP_PKEY_CTX EVar1;EVP_PKEY_CTX *local_18;EVP_PKEY_CTX *local_10;local_18 = src;local_10 = dst;do {*local_10 = *local_18;EVar1 = *local_10;local_18 = local_18 + 1;local_10 = local_10 + 1;} while (EVar1 != (EVP_PKEY_CTX)0x0);return 0;}