#include <pthread.h>

#include <unistd.h>

#include <stdlib.h>

#include <string.h>

#include <stdio.h>

# 1 
void timespec_add(time_t * to, const time_t seconds)
{
    if (to && seconds > 0)
    {
        (*to) += seconds;
    }
}