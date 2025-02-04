#include <ctype.h>

#include <regex.h>

#include <stdlib.h>

#include <string.h>

#include <stdio.h>

# 1 
void
push(unsigned char value, unsigned char stack[100], int* position)
{
    if (*position < 100) {
        *position += 1;
        stack[*position] = value;
    }
}