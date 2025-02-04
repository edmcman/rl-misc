#include <stdio.h>

# 1 
static void swap_2(int * a, int * b) {
 *a = *a + *b;
 *b = *a - *b;
 *a = *a - *b;
}