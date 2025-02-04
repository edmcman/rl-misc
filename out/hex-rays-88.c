#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, char *a2)
{
char *v2; // rax
char v4; // [rsp+1Fh] [rbp-11h]
char *v5; // [rsp+20h] [rbp-10h]

v5 = a2;
do
{
v2 = v5++;
v4 = *v2;
v5[a1 - (_QWORD)a2 - 1] = *v2;
}
while ( v4 );
return a1;
}