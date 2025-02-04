#include <stdio.h>

#include <stdlib.h>

# 1 
int incrementaX(int *x) {
 *x = *x + 10;
 return *x;
}