#include <stdio.h>

# 1 
void rotr(int *a, int *b, int *c)
{
 int save1, save2;

 save1= *a;
 save2= *b;
 *a= *c;
 *b=save1;
 *c=save2;

}