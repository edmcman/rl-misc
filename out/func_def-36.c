#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <float.h>

# 1 
static void dboxProject(double *p, double *lb, double *ub, int m)
{
register int i;

  if(!lb){
    if(!ub)
      return;
    else{
      for(i=0; i<m; ++i)
        if(p[i]>ub[i]) p[i]=ub[i];
    }
  }
  else
    if(!ub){
      for(i=0; i<m; ++i)
        if(p[i]<lb[i]) p[i]=lb[i];
    }
    else
      for(i=0; i<m; ++i)
        p[i]=( ((lb[i]) >= (p[i]))? ( ((ub[i]) >= (lb[i]))? (lb[i]) : ( ((ub[i]) <= (p[i]))? (p[i]) : (ub[i]) ) ) : ( ((ub[i]) >= (p[i]))? (p[i]) : ( ((ub[i]) <= (lb[i]))? (lb[i]) : (ub[i]) ) ) );
}