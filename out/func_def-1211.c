#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

#include <sys/ioctl.h>

#include <fcntl.h>

#include <errno.h>

#include <string.h>

# 1 
char *replaceChar(char *str, char oldChar, char newChar) {
    char *strPtr = str;
    while ((strPtr = strchr (strPtr, oldChar)) != NULL)
        *strPtr++ = newChar;
    return str;
}