#include <stdio.h>

#include <stdlib.h>

#include <sys/ioctl.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <unistd.h>

#include <sys/select.h>

#include <unistd.h>

#include <sys/resource.h>

# 1 
static int to_upper_n(char *str, int len)
{
    int i = 0;

    for(i=0; i < len; i++){
        if(('a' <= str[i]) && (str[i] <= 'z')){
            str[i] = str[i] - ('a' - 'A');
        }
    }
    return 0;
}