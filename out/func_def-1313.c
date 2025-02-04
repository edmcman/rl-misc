#include <stdio.h>

# 1 
void change(char *str)
{
    int i;
    for (i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = 'z'+'a'-str[i];
            continue;
        }
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = 'Z'+'A'-str[i];
        }
    }
}