#include <stdio.h>

# 1 
void swap( int *element1Ptr, int *element2Ptr )
{
 int hold = *element1Ptr;
 *element1Ptr = *element2Ptr;
 *element2Ptr = hold;
}