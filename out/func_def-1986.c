#include <stdlib.h>

#include <inttypes.h>

#include <stdio.h>

#include <string.h>

#include <time.h>

#include <stdlib.h>

#include <assert.h>

# 1 
static int increment_overflow(int *number, int delta)
{
    int number0;

    number0 = *number;
    *number += delta;
    return (*number < number0) != (delta < 0);
}