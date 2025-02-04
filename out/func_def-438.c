#include <stdio.h>

# 1 
void swap(int *num0, int *num1)
{
 int tmp;
 tmp = *num0;
 *num0 = *num1;
 *num1 = tmp;
}