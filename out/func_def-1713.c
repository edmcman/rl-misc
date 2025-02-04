#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#include <math.h>

#include <time.h>

#include <errno.h>

#include <unistd.h>

# 1 
int premcce_replace(char *sto, char *pattern)
{ int i;

    for (i=0; i<14; i++) {
        if (pattern[i] == '*') continue;
        else sto[i] = pattern[i];
    }
    return 0;
}