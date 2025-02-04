#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <ctype.h>

#include <unistd.h>	

# 1 
#include "defs.h"
_BOOL8  func0(const char *a1, _DWORD *a2)
{
*a2 = 1;
return strchr(a1, 49) || strchr(a1, 50);
}