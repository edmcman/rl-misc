#include <ctype.h>

#include <stdbool.h>

#include <stdint.h>

#include <string.h>

# 1 
static int parseCastling(const char *line, int *len)
{
        int nrOh = 0;
        int ix = 0;
        int oh = line[ix];
        if (oh == 'O' || oh == 'o' || oh == '0') {
                do {
                        nrOh++;
                        if (line[++ix] == '-') ix++;
                } while (line[ix] == oh);
        }
        if (ix != nrOh && ix != 2 * nrOh - 1) {
                nrOh = 0;
                ix = 0;
        }
        *len = ix;
        return nrOh;
}