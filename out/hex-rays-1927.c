#include <string.h>

# 1 
#include "defs.h"
_BYTE * func0(char a1, char *a2)
{
char v2; // dl
int v3; // eax
char v4; // dl
char v5; // dl
_BYTE *result; // rax

if ( (a1 & 2) != 0 )
v2 = 93;
else
v2 = 46;
*a2 = v2;
v3 = a1 & 0x1C;
if ( v3 == 16 )
{
a2[1] = 94;
}
else
{
if ( (a1 & 0x1Cu) <= 0x10 )
{
if ( v3 == 8 )
{
a2[1] = 43;
goto LABEL_16;
}
if ( (a1 & 0x1Cu) <= 8 )
{
if ( (a1 & 0x1C) == 0 )
{
a2[1] = 46;
goto LABEL_16;
}
if ( v3 == 4 )
{
a2[1] = 45;
goto LABEL_16;
}
}
}
a2[1] = 63;
}
LABEL_16:
if ( (a1 & 0x20) != 0 )
v4 = 42;
else
v4 = 46;
a2[2] = v4;
if ( (a1 & 1) != 0 )
v5 = 91;
else
v5 = 46;
a2[3] = v5;
result = a2 + 4;
a2[4] = 0;
return result;
}