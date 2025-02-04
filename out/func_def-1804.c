#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#include <math.h>

#include <string.h>

# 1 
void copyString(char *to, char* from)
{
    for( ; *from!='\0'; ++from, ++to)
        *to = *from;

        *to= '\0';
}