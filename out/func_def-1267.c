#include <stdarg.h>

# 1 
static void _prtl8(
    long num,
    char *str
  )
{
    int i;
    char temp[12];

    temp[0] = '\0';
    for (i = 1; i <= 11; i++)
    {
        temp[i] = (num & 07) + '0';
        num = num >> 3;
    }
    temp[11] &= '3';
    for (i = 11; temp[i] == '0'; i--);
    if (i == 0)
        i++;
    while (i >= 0)
        *str++ = temp[i--];
}