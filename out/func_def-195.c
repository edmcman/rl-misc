#include <stdio.h>

# 1 
int poly2 (int *mem, int tap1, int tap2, int in)
{
 int rez = *mem >> (8 -1) & 1;
 *mem = *mem<<1 ^ rez << tap1 ^ rez << tap2 ^ rez ^ in;
 return rez;
}