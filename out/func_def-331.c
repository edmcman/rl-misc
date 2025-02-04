#include <stdlib.h>

#include <string.h>

#include <stdio.h>

# 1 
void Permut(int* adr_a, int* adr_b){
 int temp = *adr_a;
 *adr_a=*adr_b;
 *adr_b=temp;
}