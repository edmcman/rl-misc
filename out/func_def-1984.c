#include <unistd.h>

#include <sys/types.h>

#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <time.h>

# 1 
int srand_id_get(char *buf, int *srand_id)
{
    *srand_id = *(int *)(buf + sizeof(int)*4);
    return 0;
}