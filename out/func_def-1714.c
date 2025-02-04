#include <ctype.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
void remove_all(char *str, char c) {
    char *pr = str, *pw = str;
    while (*pr) {
        *pw = *pr++;
        pw += (*pw != c);
    }
    *pw = '\0';
}