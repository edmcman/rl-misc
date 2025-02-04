#include <math.h> /* for log10() and floor() */

#include <stdio.h> /* for printf() */

# 1 
#include "defs.h"
char * func0(char *a1, _QWORD *a2)
{
char *v3; // [rsp+8h] [rbp-18h]
int v4; // [rsp+1Ch] [rbp-4h]

v3 = a1;
v4 = *a1;
*a2 = 0LL;
while ( (unsigned int)(v4 - 48) <= 9 )
{
*a2 = v4 - 48 + 10LL * *a2;
v4 = *++v3;
}
return v3;
}