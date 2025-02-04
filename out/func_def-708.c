#include <stdio.h>

#include <string.h>

#include <stdarg.h>

#include <unistd.h>

#include <fcntl.h>

# 1 
char *itoa(int i, char *buf)
{
    int j = 0;
    int k;

    do {
        k = i % 10;
        buf[j++] = k + '0';

        i /= 10;
    } while(i);

    buf[j] = '\0';

    for (k = 0; k < j / 2; ++k) {
        char temp = buf[k];
        buf[k] = buf[j - 1 - k];
        buf[j - 1 - k] = temp;
    }

    return buf;
}