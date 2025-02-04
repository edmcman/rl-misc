#include <stdio.h>

#include <string.h>

# 1 
void squareByReference(double *a){
 *a = (*a)*(*a);

 return;
}