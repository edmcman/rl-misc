#include <stdio.h>

# 1 
void rotr(int *a, int *b, int *c){
    int swapper1, swapper2, swapper3;
        swapper1=*a;
        swapper2=*b;
        swapper3=*c;
        *a=swapper3;
        *b=swapper1;
        *c=swapper2;
}