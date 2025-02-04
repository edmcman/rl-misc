#include <stdio.h>

#include <stdlib.h>

#include <limits.h>

#include <getopt.h>

# 1 
#include "defs.h"
char * func0(__int64 a1, unsigned int a2)
{
char *result; // rax
char v3; // cl
int i; // [rsp+18h] [rbp-4h]

result = (char *)a2;
for ( i = 0; i <= 8; ++i )
{
if ( (((char)a2 >> i) & 1) != 0 )
v3 = 49;
else
v3 = 48;
result = (char *)(8 - i + a1);
*result = v3;
}
return result;
}