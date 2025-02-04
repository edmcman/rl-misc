#include <stdlib.h>

#include <string.h>

#include <assert.h>

# 1 
char _mensa_next_nonws(char *str, int *offset)
{
    int k = 0;
    if (!str) return 0;
    while (str[k] != '\0') {
        if (str[k] != ' ' &&
                str[k] != '\t' &&
                str[k] != 0xa &&
                str[k] != 0xd) {
            if (str[k] != 0xc2 || str[k+1] != 0xa0) {
                if (offset) *offset = k;
                return str[k];
            }
            else {
                k++;
            }
        }
        k++;
    }
    if (offset) *offset = k;
    return 0;
}