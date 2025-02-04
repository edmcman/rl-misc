
# 1 
#include "defs.h"
_QWORD * func0(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
_QWORD *result; // rax

if ( a3 > *a1 )
{
result = (_QWORD *)*a1;
if ( a2 >= *a1 )
{
result = a1;
*a1 = a2;
}
}
else
{
result = a1;
*a1 = a3;
}
return result;
}