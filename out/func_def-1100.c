#include <assert.h>

#include <stdio.h>

#include <stdlib.h>

#include <sys/types.h>

#include <sys/ipc.h>

#include <sys/sem.h>

# 1 
void wait_read_lock( int *lk )
{
   int acquired = 0;
   do {
      ;;
      if (*lk>=0) {
         *lk = *lk + 1;
         acquired = 1;
      }
      ;;
   } while (!acquired);
}