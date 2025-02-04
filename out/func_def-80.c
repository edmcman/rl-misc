#include <stdio.h>

# 1 
void encrypt(int *i, int *j)
{(
*i)++,(*j)++;
if((*i)==5) *i=0;
else if((*j)==5) *j=0;
}