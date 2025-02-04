#include <stdio.h>

#include <stdlib.h>

# 1 
void ordenar(double *num1, double *num2, double *num3) {
    if (*num3 > *num2 && *num3 > *num1) {
        *num3 = *num2;
    } else {
            if(*num2 > *num1 && *num2 > *num3) {
                *num2 = *num1;

            } else {
                if(*num1 > *num2 && *num1 > *num3)
                    *num1 = *num3;
            }
        }
}