#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

#include <string.h>

#include <arpa/inet.h>

#include <time.h>

#include <ctype.h>

#include <glob.h>

#include <assert.h>

#include <inttypes.h>

#include <unistd.h>

#include <stdio.h>

#include <dirent.h>

#include <sys/stat.h>

#include <stdlib.h>

# 1 
void _remove_char(char *str, char garbage)
{

    char *src, *dst;
    for (src = dst = str; *src != '\0'; src++)
    {
        *dst = *src;
        if (*dst != garbage) dst++;
    }
    *dst = '\0';
}