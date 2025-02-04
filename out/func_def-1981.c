#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

#include <stdarg.h>

#include <limits.h>

# 1 
static void stack4_pop(unsigned long *s)
{
 *s = *s >> 4;
}