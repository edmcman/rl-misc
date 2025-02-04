#include <assert.h>

#include <stdlib.h>

#include <string.h>

#include <ctype.h>

#include <stdio.h>

# 1 
char *str_replace_set(char *string, const char *set, char replacement)
{
    if(string == NULL || set == NULL)
        return NULL;

    char *e = string;
    while(*e)
    {
        if(strchr(set, *e) != NULL)
            *e = replacement;
        ++e;
    }

    return string;
}