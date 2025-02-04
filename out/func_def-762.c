#include <stdio.h>

#include <sys/types.h>

#include <sys/uio.h>

#include <unistd.h>

# 1 
static void
currentLineAndChar(const char * buf, unsigned int off,
                   unsigned int * l, unsigned int * c)
{
    unsigned int i;

    *l = 1; *c = 0;

    for (i=0; i < off; i++) {
        if (buf[i] == '\n') {
            *l += 1;
            *c = 0;
        } else {
            *c +=1;
        }
    }
}