#include <errno.h>

#include <limits.h>

#include <signal.h>

#include <stdarg.h>

#include <string.h>

#include <stdlib.h>

#include <time.h>

# 1 
static int
smtp_si_mul_size_t(const size_t a,
                   const size_t b,
                   size_t *const result){
  int wraps;







  if(b != 0 && a > ((size_t)(-1)) / b){
    wraps = 1;
  }
  else{
    wraps = 0;
  }
  if(result){
    *result = a * b;
  }
  return wraps;
}