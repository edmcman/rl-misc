#include <stdio.h>

#include <string.h>

#include <errno.h>

#include <unistd.h>

#include <assert.h>

#include <signal.h>

#include <stdlib.h>

#include <pthread.h>

# 1 
void sesc_unlock_op(volatile int *addr, int val)
{
  *addr = val;
}