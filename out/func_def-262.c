#include <assert.h>

#include <math.h>

#include <setjmp.h>

#include <stdbool.h>

#include <stdint.h>

#include <stdlib.h>

#include <string.h>

# 1 
static void updateHistory(short historyCounts[], int index, int depth)
{
        historyCounts[index] += ((64) <= (depth * depth) ? (64) : (depth * depth));
        if (historyCounts[index] >= (1 << 11))
                for (int i=0; i <= ((int) ((~0) & ~(~0ULL << (12)))); i++)
                        historyCounts[i] >>= 1;
}