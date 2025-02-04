#include <stdio.h>

#include <string.h>

#include <openssl/engine.h>

#include <openssl/rsa.h>

#include <openssl/err.h>

#include <openssl/opensslconf.h>

#include <fcntl.h>

# 1 
static int RSA_is8_private_encrypt(int flen, const unsigned char *from, unsigned char *to, RSA *rsa, int padding)
{
 return 1;
}