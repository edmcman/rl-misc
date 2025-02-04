#include <inttypes.h>

#include <string.h>

#include <unistd.h>

#include <stdlib.h>

#include <signal.h>

#include <sys/types.h>

#include <sys/wait.h>

# 1 
static void do_cpuid(unsigned int *eax, unsigned int *ebx, unsigned int *ecx,
                     unsigned int *edx)
{
        int id = *eax;

        asm("movl %4, %%eax;"
            "cpuid;"
            "movl %%eax, %0;"
            "movl %%ebx, %1;"
            "movl %%ecx, %2;"
            "movl %%edx, %3;"
                : "=r" (*eax), "=r" (*ebx), "=r" (*ecx), "=r" (*edx)
                : "r" (id)
                : "eax", "ebx", "ecx", "edx");
}