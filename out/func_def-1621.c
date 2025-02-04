#include <string.h>

#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <ctype.h>

# 1 
static void xformSetScale(float* t, float sx, float sy)
{
 t[0] = sx; t[1] = 0.0f;
 t[2] = 0.0f; t[3] = sy;
 t[4] = 0.0f; t[5] = 0.0f;
}