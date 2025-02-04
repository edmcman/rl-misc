#include <stdio.h>

#include <stdlib.h>

#include <sys/time.h>

# 1 
void xepBatKi (int ngaunhien [1000], int N)
{
    for(int k = 0; k < N-1; k++)
    {
        int imax = ngaunhien[k];
        for(int i = k; i <= N-1; i++)
        {
            if(imax > ngaunhien[i])
            {
                imax = ngaunhien[i];
                ngaunhien[i] = ngaunhien[k];
                ngaunhien[k] = imax;
            }
        }
    }
}