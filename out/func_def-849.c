#include <stdio.h>

# 1 
void procedimento_ref(int *N, int M) {
 (*N) = (*N) + 1;
 M = M + 1;
}