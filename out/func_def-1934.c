#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <omp.h>

#include <time.h>

# 1 
int parPrefixSumBlelloch(int *a, int p, int id){
 int logp = 0;

 for(int j=1; j<p; j<<=1, logp++){
  int tj = j<<1;
  if(0 == id%tj)
   a[id+tj-1] += a[id+j-1];
#pragma omp barrier
 }

 if(!id)
  a[p-1] = 0;

 for(int j=1<<(logp-1); j>=1; j>>=1){
  int tj = j<<1;
  if(0 == id%tj){
   int t = a[id+j-1];
   a[id+j-1] = a[id+tj-1];
   a[id+tj-1] = a[id+j-1] + t;
  }
#pragma omp barrier
 }
 return a[id];
}