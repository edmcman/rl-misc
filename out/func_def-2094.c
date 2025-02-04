#include <stdlib.h>

# 1 
void __attribute__((noinline)) bar(int *mem) {
  mem[0] = 42;
}