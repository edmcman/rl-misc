






























# 1 
#include "defs.h"
int * func0(int *a1)
{
int *result; // rax

result = (int *)(unsigned int)*a1;
if ( (_DWORD)result != -1 )
{
close(*a1);
result = a1;
*a1 = -1;
}
return result;
}