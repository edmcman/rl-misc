#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <time.h>

#include <string.h>

#include <ctype.h>

# 1 
#include "defs.h"
char * func0(char *a1, char *a2, int a3)
{
char *v3; // rdx
char *v4; // rax
char *result; // rax
int v9; // [rsp+20h] [rbp-4h]

v9 = 0;
while ( *a2 <= 32 && *a2 > 0 )
++a2;
while ( (*a2 > 32 || *a2 < 0) && v9 < a3 - 1 )
{
v3 = a2++;
v4 = a1++;
*v4 = *v3;
++v9;
}
result = a1;
*a1 = 0;
return result;
}