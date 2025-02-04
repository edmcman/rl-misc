#include <stdio.h>

#include <stdlib.h>

# 1 
void setBit(int k,int* ans,int val){

    *ans = (val<<(k-1))|(*ans);
}