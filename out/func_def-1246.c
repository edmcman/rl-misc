#include <stdarg.h>

# 1 
static void _prtl2(
    long num,
    char *str
  )
{
    int i;
    char temp[35];

    temp[0] = '\0';
    for (i = 1; i <= 32; i++)
    {
        temp[i] = ((num % 2) == 0) ? '0' : '1';
        num = num >> 1;
    }
    for (i = 32; temp[i] == '0'; i--);
    if (i == 0)
        i++;
    while (i >= 0)
        *str++ = temp[i--];
}