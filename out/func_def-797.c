#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <time.h>

#include <string.h>

#include <ctype.h>

# 1 
void getWord(char *out, const char *in, int max) {
    int count = 0;
    while ((*in <= ' ') && (*in > '\0')) in++;
    while (((*in > ' ') || (*in < '\0')) && (count < (max - 1))) {
        *(out++) = *(in++);
        count++;
    }
    *out = '\0';
}