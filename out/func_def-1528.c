#include <stdlib.h>

#include <string.h>

#include <sys/shm.h>

#include <sys/types.h>

# 1 
float shmGet(float* addr, long i) {
 return addr[i];
}