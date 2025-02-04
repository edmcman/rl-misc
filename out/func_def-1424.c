#include <stdio.h>

# 1 
void rotr(int *a,int *b,int *c)
{
 *a=*a + *c;
 *c=*a - *c;
 *a=*a - *c;

 *b=*b + *c;
 *c=*b - *c;
 *b=*b - *c;
}