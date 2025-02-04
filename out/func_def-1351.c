#include <stdio.h> // fputc(), etc

#include <stdlib.h> // exit()

#include <unistd.h> // write(), lseek()

#include <string.h> // strncmp(), strlen()

#include <fcntl.h> // open(), fcntl()

#include <sys/stat.h> // S_IRUSR, S_IWUSR

#include <math.h> // log()

# 1 
static int read_var_len (int fd, long *value)
{
    unsigned char c;
    int bytes;

    *value = 0;
    bytes = 0;
    do
    {
        (*value) <<= 7;
        bytes += read (fd, &c, 1);
        (*value) += (c & 0x7f);
    }
    while ( (c & 0x80) == 0x80 );

    return bytes;
}