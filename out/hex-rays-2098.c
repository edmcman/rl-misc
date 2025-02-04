#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
const char * func0(_DWORD *a1, _DWORD *a2, int a3)
{
const char *result; // rax

if ( a3 )
goto LABEL_10;
if ( !*a1 && *a2 )
{
*a1 = 1;
*a2 = 0;
return "OPEN";
}
if ( *a1 && *a2 )
{
*a1 = 0;
*a2 = 0;
result = "CLOSED";
}
else
{
LABEL_10:
if ( *a1 || *a2 || !a3 )
{
if ( *a1 && !*a2 && a3 )
{
*a2 = 1;
result = "CLOSING";
}
else if ( *a1 && *a2 && a3 )
{
*a2 = 0;
*a1 = 0;
result = "STOPPED_WHILE_CLOSING";
}
else if ( !*a1 && *a2 && a3 )
{
*a2 = 0;
*a1 = 1;
result = "STOPPED_WHILE_OPENING";
}
else
{
result = "ERROR";
}
}
else
{
*a2 = 1;
result = "OPENING";
}
}
return result;
}