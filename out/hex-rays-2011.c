#include <netdb.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(const char *a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, struct servent **a6)
{
__int64 result; // rax

*a6 = getservbyname(a1, a2);
if ( *a6 )
result = 0LL;
else
result = 0xFFFFFFFFLL;
return result;
}