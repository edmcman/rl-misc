#include <pthread.h>

#include <stdio.h>

#include <stdlib.h>

# 1 
void unlock(unsigned int* barrier)
{
    if (barrier) {
        *barrier = 0;
    }
}