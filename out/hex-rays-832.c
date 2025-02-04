
# 1 
#include "defs.h"
const char * func0(_DWORD *a1)
{
const char *result; // rax

if ( (*a1 & 1) != 0 )
{
*a1 &= 0xFFFFFFFE;
result = "^1head";
}
else if ( (*a1 & 2) != 0 )
{
*a1 &= 0xFFFFFFFD;
result = "^4chest";
}
else if ( (*a1 & 4) != 0 )
{
*a1 &= 0xFFFFFFFB;
result = "^4back";
}
else if ( (*a1 & 8) != 0 )
{
*a1 &= 0xFFFFFFF7;
result = "^4left arm";
}
else if ( (*a1 & 0x10) != 0 )
{
*a1 &= 0xFFFFFFEF;
result = "^4right arm";
}
else if ( (*a1 & 0x20) != 0 )
{
*a1 &= 0xFFFFFFDF;
result = "^2leg";
}
else
{
*a1 = 0;
result = "error!";
}
return result;
}