#include <stdlib.h>

#include <string.h>

#include <stdio.h>

#include <errno.h>

#include <getopt.h>

#include <limits.h>

#include <sys/types.h>

#include <sys/wait.h>

#include <sys/select.h>

#include <unistd.h>

# 1 
static char* sh_escape_string(char* dest, char* src) {
    *dest++ = '\'';
    while (1) {
        char x = *src++;
        if (x == '\'') {
            *dest++ = '\'';
            *dest++ = '\\';
            *dest++ = '\'';
        } else if (x == '\0') {
            *dest++ = '\'';
            break;
        }
        *dest++ = x;
    }
    *dest = '\0';
    return dest;
}