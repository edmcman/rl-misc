#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

# 1 
__attribute__((noinline)) void increment_12(int *i) { (*i)++; }