#include <stdint.h>

#include <stdlib.h>

#include <string.h>

#include <assert.h>

#include <openssl/rc4.h>

# 1 
static int
    EncodeInt32LE(char *output, int nVal) {
    output[0] = nVal;
    nVal >>= 8;
    output[1] = nVal;
    nVal >>= 8;
    output[2] = nVal;
    nVal >>= 8;
    output[3] = nVal;
    return 4;
}