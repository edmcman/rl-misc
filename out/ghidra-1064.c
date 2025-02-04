#include <limits.h>

#include <stdio.h>

#include <string.h>

#include <openssl/asn1.h>

#include <openssl/err.h>

# 1 
void func0(ASN1_STRING *x,int n){x->length = n;return;}