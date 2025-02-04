#include <stdio.h> // sprintf

#include <assert.h> // assert

# 1 
static int grisu3_i_to_str(int val, char *str)
{
    int len, i;
    char *s;
    char *begin = str;
    if (val < 0) { *str++ = '-'; val = -val; }
    s = str;

    for(;;)
    {
        int ni = val / 10;
        int digit = val - ni*10;
        *s++ = (char)('0' + digit);
        if (ni == 0)
            break;
        val = ni;
    }
    *s = '\0';
    len = (int)(s - str);
    for(i = 0; i < len/2; ++i)
    {
        char ch = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = ch;
    }

    return (int)(s - begin);
}