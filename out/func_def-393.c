#include <stdio.h>

# 1 
void reverse(char s[])
{
        int i, j, c;

        i = 0;
        while (s[i] != '\0')
                ++i;

        if (s[i - 1] == '\n')
                j = i - 2;
        else
                j = i - 1;

        i = 0;
        while (i < j) {
                c = s[i];
                s[i] = s[j];
                s[j] = c;
                ++i;
                --j;
        }
}