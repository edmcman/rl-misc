#include <stdio.h>

#include <unistd.h>

#include <fcntl.h>

#include <string.h>

#include <strings.h>

#include <errno.h>

#include <termios.h>

# 1 
int recv_eecc(int fd, unsigned char *buffer)
{
    unsigned char c;
    int i, ret;

    for(i = 0, c = 0; i < 128 && c != 0xee; i++) {
        if(read(fd, &c, 1) != 1)
            return -1;
    }
    buffer[0] = 0xee;
    for(i = 1, ret = 1; ret == 1; ) {
        ret = read(fd, &c, 1);

        buffer[i++] = c;
        if(c == 0xcc)
            break;
    }
    return i;
}