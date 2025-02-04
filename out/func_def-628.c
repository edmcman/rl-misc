#include <stdio.h>

# 1 
void setBit(unsigned int k,unsigned int* ans,unsigned int val){

    *ans = (val<<(k-1))|(*ans);
}