#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

#include <fcntl.h>

#include <string.h>

# 1 
void to_upper(char* str)
{
    char *p = str;
    while(*p != '\0'){
        if(*p >= 'a' && *p <='z')
            *p = *p - ('a'-'A');
        ++p;
    }
}