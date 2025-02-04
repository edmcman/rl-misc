#include <stdlib.h>

# 1 
float dotprod (float B[], float C[], int n)
{
  int i;
  float sum = 0;

#pragma omp target map(to: B[0:n], C[0:n])
#pragma omp teams num_teams(8) thread_limit(16)
#pragma omp distribute parallel for reduction(+:sum) dist_schedule(static, 1024) schedule(static, 64)


 for (i = 0; i < n; i++)
   sum += B[i] * C[i];

  return sum;
}