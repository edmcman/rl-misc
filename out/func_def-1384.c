#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <errno.h>

#include <stdarg.h>

# 1 
char *strcpyo(char *dest, const char *src) {
    size_t i;

    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];

    dest[i] = '\0';

    return dest;
}