#include <stdio.h>

# 1 
int poly (int *mem, int tap, int in)
{
 int rez = *mem >> (16 -1) & 1;
 *mem = *mem<<1 ^ rez << tap ^ rez ^ in;
 return rez;
}