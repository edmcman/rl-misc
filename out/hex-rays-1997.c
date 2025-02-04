#include <openssl/x509.h>

#include <string.h>

#include <stdlib.h>

#include <openssl/ssl.h>

#include <openssl/conf.h>

#include <openssl/x509v3.h>

# 1 
#include "defs.h"
__int64  func0(unsigned __int8 *a1, __int64 a2, unsigned __int8 *a3, __int64 a4)
{
__int64 v6; // [rsp+10h] [rbp-20h]
unsigned __int8 v8; // [rsp+2Eh] [rbp-2h]
unsigned __int8 v9; // [rsp+2Fh] [rbp-1h]

v6 = a2;
if ( a2 != a4 )
return 0LL;
while ( v6 )
{
v8 = *a1;
v9 = *a3;
if ( !*a1 )
return 0LL;
if ( v8 != v9 )
{
if ( v8 > 0x40u && v8 <= 0x5Au )
v8 += 32;
if ( v9 > 0x40u && v9 <= 0x5Au )
v9 += 32;
if ( v8 != v9 )
return 0LL;
}
++a1;
++a3;
--v6;
}
return 1LL;
}