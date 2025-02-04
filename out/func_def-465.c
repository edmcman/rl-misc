#include <string.h>

#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <ctype.h>

# 1 
static void xformSetIdentity(float* t)
{
 t[0] = 1.0f; t[1] = 0.0f;
 t[2] = 0.0f; t[3] = 1.0f;
 t[4] = 0.0f; t[5] = 0.0f;
}