#include <stdio.h>

#include <stdlib.h>

#include <pthread.h>

#include <unistd.h>

# 1 
static void add_num(int *n, int i)
{
 sleep(1);

 *n += i;
}