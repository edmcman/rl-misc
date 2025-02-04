#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <dirent.h>

#include <search.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <unistd.h>

# 1 
char* mfm_write_single_item(char* dest, char* item)
{
    *dest++ = '"';
    for (char* c = item; *c; c++) {
        switch (*c) {
        case '\\':
            *dest++ = '\\';
            *dest++ = '\\';
            break;
        case '"':
            *dest++ = '\\';
            *dest++ = '"';
            break;
        default:
            *dest++ = *c;
            break;
        }
    }
    *dest++ = '"';
    *dest++ = ' ';
    return dest;
}