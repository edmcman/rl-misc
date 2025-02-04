#include <stdio.h>

#include <assert.h>

# 1 
int change(int *num) {
  *num = 777;
  return 0;
}