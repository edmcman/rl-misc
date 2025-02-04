#include <stdio.h>

#include <stdlib.h>

#include <math.h>

# 1 
void iorder(int i, int j, int k, int l, int *i1, int *j1, int *k1, int *l1)
{ int y[5],tem,ii,jj,kk;
   y[1]=i; y[2]=j; y[3]=k; y[4]=l;
   for(jj=2;jj<=4;jj++)
   { for(ii=1;ii<=jj-1;ii++)
     { if (y[ii]>y[jj]) {
        tem=y[jj];
        for(kk=jj;kk>=ii+1;kk--) y[kk]=y[kk-1];
        y[ii]=tem; }
     }
   }
   *i1=y[1]; *j1=y[2]; *k1=y[3]; *l1=y[4];
}