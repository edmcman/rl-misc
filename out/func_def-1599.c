#include <stdio.h>

# 1 
void cubeByReference( int *nPtr )
{
    *nPtr = *nPtr * *nPtr * *nPtr;

}