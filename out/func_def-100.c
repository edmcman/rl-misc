#include <stdio.h>

# 1 
void troca(int *i, int *j) {
 int k;
 k = (*i);
 (*i) = (*j);
 (*j) = k;
}