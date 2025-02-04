#include <stdio.h>

# 1 
void interchange(int init, int order_c, int term, int matrix[])
{
     int i, j;
     for(i=(init*order_c), j =(term*order_c); i<=((order_c)*(init+1))-1, j<=((order_c)*(term+1))-1; ++i, ++j)
     {
                           int t,t1;
                           t=matrix[i];
                           t1=matrix[j];
                           matrix[i] = t;
                           matrix[j] = t1;
                           matrix[i] = t1;
                           matrix[j] = t;
     }
}