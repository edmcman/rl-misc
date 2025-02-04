
















# 1 
#include "defs.h"
char * func0(char *a1, int a2, _DWORD *a3)
{
char *result; // rax
char *i; // [rsp+20h] [rbp-8h]

for ( i = &a1[a2 - 1]; i > a1 && *i != 47; --i )
;
*a3 = (_DWORD)i - (_DWORD)a1;
if ( i != a1 || *i == 47 )
{
if ( *a3 )
{
result = a1;
}
else
{
*a3 = 1;
result = (char *)&unk_D5;
}
}
else
{
*a3 = 1;
result = (char *)&unk_D3;
}
return result;
}