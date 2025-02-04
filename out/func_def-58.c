#include <stdarg.h>

# 1 
static void _prtl10(
      long num,
      char *str
    )
{
    int i;
    char temp[11];

    temp[0] = '\0';
    temp[1] = ((num<0) ? -(num%10) : (num%10)) + '0';
    num /= (num<0) ? -10 : 10;
    for (i = 2; i <= 10; i++) {
        temp[i] = num % 10 + '0';
        num /= 10;
    }
    for (i = 10; temp[i] == '0'; i--);
    if (i == 0)
        i++;
    while (i >= 0)
        *str++ = temp[i--];
}