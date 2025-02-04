#include <stdio.h>

#include <stdlib.h>

# 1 
static void cpuid(int cpuinfo[4] ,int infotype) {
        __asm__ __volatile__ (
                "cpuid":
                "=a" (cpuinfo[0]),
                "=b" (cpuinfo[1]),
                "=c" (cpuinfo[2]),
                "=d" (cpuinfo[3]) :
                "a" (infotype), "c" (0)
                );
}