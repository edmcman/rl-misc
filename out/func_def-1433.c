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
void SwapIEEE16(char W[2])
{
   char B;

   B = W[0]; W[0] = W[1]; W[1] = B;
}