
# 1 
#include "defs.h"
_WORD * func0(__int16 a1, _WORD *a2)
{
_WORD *result; // rax

result = a2;
*a2 = a1;
return result;
}