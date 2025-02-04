#include <stdarg.h>

#include <sys/types.h>

#include <sys/param.h>

# 1 
static
void do_hex( char *temp,
                unsigned int value,
                char *s)

{
    int i;
    static
    char *dec_to_hex = "0123456789abcdef";

    temp[0] = '\0';

    for (i = 1; i <= 8; i++)
    {
        temp[i] = dec_to_hex[value & 0x0f];
        value >>= 4;
    }

    for (i = 8; temp[i] == '0'; i--)
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