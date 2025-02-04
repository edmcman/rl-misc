#include <pthread.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <stdbool.h>

#include <assert.h>

#include <errno.h>

#include <unistd.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
static int SetBit(int *tab, int idx)
{
 int res = ( tab[ idx >> 5 ] & (1 << (idx & 31)) );
 tab[ idx >> 5 ] |= 1 << (idx & 31);
 return(res);
}