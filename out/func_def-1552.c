#include <stdio.h>

#include <stdlib.h>

#include <string.h>             /* memset, strlen */

#include <ctype.h>

#include <errno.h>

#include <math.h>

#include <fcntl.h>

#include <unistd.h>

# 1 
static int to_utf8(char* utfbuffer, unsigned int uc)
{
    int count=0;
    if (uc< 0x80) {
        utfbuffer[0]=uc;
        count=1;
    }
    else {
        if (uc < 0x800) {
            utfbuffer[count++]=0xC0 | (uc >> 6);
        } else {
            utfbuffer[count++]=0xE0 | (uc >>12);
            utfbuffer[count++]=0x80 | ((uc >>6) &0x3F);
        }
        utfbuffer[count++]=0x80 | (uc & 0x3F);
    }
    utfbuffer[count]=0;
    return count;
}