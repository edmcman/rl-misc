#include <stdio.h>

# 1 
void find_max(int *a, int *b)
{
 int temp;
 temp = *a;
 *a = *b;
 *b = temp;
}