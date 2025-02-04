#include <ctype.h>

# 1 
char *ant_itoa(int n, char *dst, int base) {
    char *d, *p;
    char str[33];
    unsigned m;

    p = str + sizeof(str) - 1;
    d = dst;

    *p = '\0';


    if (n == (int)(((unsigned int)~0 >> 1) + 1))
        m = (unsigned)n;
    else if (n < 0 && base == 10)
        m = -n;
    else
        m = n;

    do {
        *--p = "0123456789abcdef"[m % base];
    }while (m /= base);

    if (n < 0 && base == 10)
        *--p = '-';

    while ((*dst++ = *p++) != '\0')
        ;
    return d;
}