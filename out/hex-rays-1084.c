#include <stdint.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, char a2)
{
_BYTE *i; // [rsp+4h] [rbp-18h]
__int64 v4; // [rsp+14h] [rbp-8h]
__int64 v5; // [rsp+14h] [rbp-8h]

i = (_BYTE *)a1;
if ( a1 )
{
last_2006 = a1;
goto LABEL_9;
}
if ( !last_2006 )
return 0LL;
LABEL_9:
for ( i = (_BYTE *)last_2006; *i; ++i )
{
if ( a2 == *i )
{
*i = 0;
v4 = last_2006;
last_2006 = (__int64)(i + 1);
return v4;
}
}
v5 = last_2006;
last_2006 = 0LL;
return v5;
}