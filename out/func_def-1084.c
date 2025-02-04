#include <stdint.h>

# 1 
char *
strtok_s(char *str, const char delim) {

    static char *last;
    char *tmp;
    if (str) {
        last = str;
    } else if (last) {
        str = last;
    } else {
        return 0;
    }
    while (*str) {
        if (*str == delim) {
            *str++ = 0;
            tmp = last;
            last = str;
            return tmp;
        }
        str++;
    }
    tmp = last;
    last = 0;
    return tmp;
}