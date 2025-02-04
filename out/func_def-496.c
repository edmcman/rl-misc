#include <assert.h>

#include <string.h>

# 1 
float ffi_test_23(float x[3], float y[3]) {
  return x[0] * y[0] + x[1] * y[1] + x[2] * y[2];
}