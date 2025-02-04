#include <stdio.h>

#include <stdlib.h>

# 1 
void imul(int *stack, int *spointer, int operand) {
  int value1 = *(stack+*spointer);
  (*spointer)--;
  int value2 = *(stack+*spointer);
  *(stack+*spointer) = value1 * value2;




}