#include <stdio.h>

# 1 
void fourOperation(double a, double b, double *add, double *sub, double *multi, double *div){
 *add = a + b;
 *sub = a - b;
 *multi = a* b;
 *div = a / b;

 return;
}