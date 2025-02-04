#include <stdio.h>

# 1 
void divide (int a, int b, int *quotient, int *remndr)
{
    *quotient = a / b;
    *remndr = a % b;

    return;
}