#include <sys/types.h>

#include <stdio.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, unsigned int a2)
{
char *v2; // rax
_BYTE *v3; // rax
char *v6; // [rsp+10h] [rbp-30h]
unsigned __int64 *i; // [rsp+10h] [rbp-30h]
_BYTE *v8; // [rsp+18h] [rbp-28h]
char v9; // [rsp+37h] [rbp-9h] BYREF
unsigned __int64 v10; // [rsp+38h] [rbp-8h] BYREF

v10 = __readfsqword(0x28u);
v6 = &v9;
v8 = a1;
do
{
v2 = v6--;
*v2 = a2 % 0xA + 48;
a2 /= 0xAu;
}
while ( a2 );
for ( i = (unsigned __int64 *)(v6 + 1); i < &v10; i = (unsigned __int64 *)((char *)i + 1) )
{
v3 = v8++;
*v3 = *(_BYTE *)i;
}
*v8 = 0;
return (_BYTE *)(v8 - a1);
}