#include <stdio.h>

# 1 
void rev_str(char *str) {
    char *last;
    char tmp;

    for (last = str; *last; last++);
    last--;

    while (str < last) {
        tmp = *last;
        *last-- = *str;
        *str++ = tmp;
    }
}