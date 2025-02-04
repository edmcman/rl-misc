#include <stdlib.h>

# 1 
char *strCpy(char *dest, char *source) {
    char *ptr = dest;
    while ( (*ptr++=*source++) != '\0' );
    return dest;
}