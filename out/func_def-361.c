#include <stdarg.h>

#include <sys/types.h>

#include <sys/param.h>

# 1 
static
void do_octal( char *temp,
                    unsigned int value,
                    char *s)

{
    int i;

    temp[0] = '\0';

    for (i = 1; i <= 11; i++)
    {
        temp[i] = (char) ((value & 07) + (int) '0');
        value >>= 3;
    }
    temp[11] &= '3';

    for (i = 11; temp[i] == '0'; i--)
    {
        ;
    }

    if (i == 0)
    {
        i++;
    }

    while (i >= 0)
    {
        *s++ = temp[i--];
    }

    return;
}