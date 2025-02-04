#include <stdio.h>

#include <stdlib.h>

# 1 
int foo(int* a, int* b, int c){


  *a = 2 * *a;


  *b = *b / 2;


  c = *a + *b;


  return (c);
}