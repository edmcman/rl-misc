#include <sys/types.h>

#include <unistd.h>

#include <sys/wait.h>

# 1 
char encode(char *buffer, char b)
{
    buffer[0] = (b & 0xF0) >> 4;
    buffer[1] = b & 0x0F;
    if (buffer[0] > 9)
        buffer[0] = 'A' + (buffer[0] - 10);
    else
        buffer[0] += '0';
    if (buffer[1] > 9)
        buffer[1] = 'A' + (buffer[1] - 10);
    else
        buffer[1] += '0';
    return 0;
}