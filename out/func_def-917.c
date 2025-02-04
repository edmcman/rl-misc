#include <errno.h>

#include <limits.h>

#include <signal.h>

#include <stdarg.h>

#include <string.h>

#include <stdlib.h>

#include <time.h>

# 1 
static int
smtp_si_add_size_t(const size_t a,
                   const size_t b,
                   size_t *const result){
  int wraps;







  if(((size_t)(-1)) - a < b){
    wraps = 1;
  }
  else{
    wraps = 0;
  }
  if(result){
    *result = a + b;
  }
  return wraps;
}