#include <stdio.h>

# 1 
void rot13(char *str)
{
    char *c;

    for (c = str; *c; c++)
    {
        if (*c >= 'A' && *c <= 'Z')
            *c = ((*c - 'A' + 13) % 26) + 'A';
        else if (*c >= 'a' && *c <= 'z')
            *c = ((*c - 'a' + 13) % 26) + 'a';
    }
}