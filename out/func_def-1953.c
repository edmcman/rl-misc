#include <float.h>

# 1 
double dst_transform_pop(double *stack,int *pointer)
{
 double value;

 if(*pointer>0) (*pointer)--;
 value=stack[*pointer];
 return value;
}