#include <stdlib.h>

#include <stdio.h>

#include <string.h>

# 1 
void myStrcpy(char *s, char *t)
{
    while ((*s++ = *t++) != '\0');
}