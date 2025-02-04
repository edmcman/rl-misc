#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <ncurses.h>

# 1 
#include "defs.h"
__int64  func0(int *a1, _DWORD *a2)
{
int v3; // [rsp+18h] [rbp-8h]

v3 = *a1;
*a1 = -*a2;
*a2 = v3;
return 0LL;
}