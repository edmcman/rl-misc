#include <ctype.h>

#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#include <math.h>

#include <time.h>

#include <unistd.h>

#include <X11/Xlib.h>

#include <X11/Xutil.h>

#include <X11/Xatom.h>

#include <X11/keysym.h>

#include <X11/XKBlib.h>

# 1 
#include "defs.h"
__int64  func0(unsigned __int8 *a1)
{
__int64 result; // rax
unsigned __int8 v2; // [rsp+17h] [rbp-1h]

v2 = *a1;
*a1 = a1[1];
result = v2;
a1[1] = v2;
return result;
}