#include <stdio.h>

#include <assert.h>

# 1 
int func0(EVP_PKEY_CTX *dst,EVP_PKEY_CTX *src){int local_c;local_c = 0;while( true ) {dst[local_c] = src[local_c];if (dst[local_c] == (EVP_PKEY_CTX)0x0) break;local_c = local_c + 1;}return 0;}