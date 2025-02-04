
# 1 
#include "defs.h"
__int64  func0(char *a1, int *a2)
{
char *v3; // [rsp+8h] [rbp-18h]
int v4; // [rsp+18h] [rbp-8h]
int v5; // [rsp+1Ch] [rbp-4h]

v3 = a1;
v4 = 0;
v5 = 1;
if ( *a1 == 45 )
{
v5 = -1;
v3 = a1 + 1;
}
else if ( *a1 == 43 )
{
v3 = a1 + 1;
}
while ( *v3 )
{
if ( *v3 <= 47 || *v3 > 57 )
return 0xFFFFFFFFLL;
v4 = 10 * v4 + v5 * (*v3++ - 48);
}
*a2 = v4;
return 0LL;
}