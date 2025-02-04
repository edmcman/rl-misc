#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <stdbool.h>

#include <stdarg.h>

# 1 
static void
GASetParamCount(char *CtrlStr,
                int Max,
                int *ParamCount) {
    int i;

    *ParamCount = 0;
    for (i = 0; i < Max; i++)
        if ((((CtrlStr[i]) == '%') || ((CtrlStr[i]) == '!'))) {
            if (CtrlStr[i + 1] == '*')
                *ParamCount += 2;
            else
                (*ParamCount)++;
        }
}