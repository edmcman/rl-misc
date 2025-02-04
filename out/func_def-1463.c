#include <pthread.h>

#include <sys/time.h>

#include <unistd.h>

#include <stdlib.h>

#include <malloc.h>

#include <math.h>

# 1 
void CreatePermutation(long n, long *PERM, long permutation_method)
{
  long j;

  PERM[n] = n;
  if (permutation_method == 1) {
    for (j=0; j<n; j++)
      PERM[j] = j;
  }
}