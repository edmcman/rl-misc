#include <stdlib.h>

# 1 
#include "defs.h"
const char * func0(_BYTE *a1, int a2, int *a3)
{
const char *result; // rax
_BYTE *s; // [rsp+20h] [rbp-10h]
_BYTE *v6; // [rsp+28h] [rbp-8h]
void *v7; // [rsp+28h] [rbp-8h]
void *v8; // [rsp+28h] [rbp-8h]

s = &a1[a2];
v6 = memchr(s, 64, (unsigned int)*a3);
if ( !v6 )
return "0-body";
if ( v6 <= s )
{
if ( *a3 > 1 && s[1] == 47 && s[2] == 47 )
{
v7 = memchr(s, 10, (unsigned int)*a3);
if ( v7 )
{
if ( s == a1 || *(s - 1) == 10 )
*a3 = (_DWORD)v7 - (_DWORD)s + 1;
else
*a3 = (_DWORD)v7 - (_DWORD)s;
}
result = "1-comment";
}
else
{
v8 = memchr(s + 1, 64, (unsigned int)(*a3 - 1));
if ( v8 )
{
*a3 = (_DWORD)v8 + 1 - (_DWORD)s;
result = "3-parameter";
}
else
{
result = "2-Error-non-closing";
}
}
}
else
{
*a3 = (_DWORD)v6 - (_DWORD)s;
result = "0-body";
}
return result;
}