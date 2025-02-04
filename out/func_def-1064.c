#include <limits.h>

#include <stdio.h>

#include <string.h>

#include <openssl/asn1.h>

#include <openssl/err.h>

# 1 
void
ASN1_STRING_length_set(ASN1_STRING *x, int len)
{
 x->length = len;
}