#include <stdio.h>

# 1 
void addMat(int a[][3],int b[][3],int c[][3])
{
 int i,j;
 for(i=0;i<3;i++)
   for(j=0;j<3;j++)
    *(*(c+i)+j) = *(*(a+i)+j) + *(*(b+i)+j);
}