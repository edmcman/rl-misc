#include <stdio.h>

#include <unistd.h>

#include <stdlib.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <string.h>

# 1 
void cpuid_asm(unsigned int index, unsigned int *results)
{
 unsigned int eax, ebx, ecx, edx;


 __asm__ __volatile("cpuid"
                     : "=a"(eax), "=b"(ebx), "=c"(ecx), "=d"(edx)
       : "a" (index));




 results[0] = eax;
 results[1] = ebx;
 results[2] = ecx;
 results[3] = edx;
}