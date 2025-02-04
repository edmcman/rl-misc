#include <stdio.h>

# 1 
void sum_ave(int a, int b, int* sum, double *ave)
{
 *sum = a + b;
 *ave = (a+b)*0.5;
}