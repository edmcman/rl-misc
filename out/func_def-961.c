#include <stdio.h>

# 1 
static int nonatomic_set(int *x) {
 int prev = *x;
 *x = 1;
 return prev;
}