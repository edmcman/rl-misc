#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <x86intrin.h>

#include <cpuid.h>

#include <inttypes.h>

#include <stdint.h>

# 1 
void cpu_get(int* cpuinfo, int info)
{
 __asm__ __volatile__(
  "xchg %%ebx, %%edi;"
  "cpuid;"
  "xchg %%ebx, %%edi;"
  :"=a" (cpuinfo[0]), "=D" (cpuinfo[1]), "=c" (cpuinfo[2]), "=d" (cpuinfo[3])
  :"0" (info)
 );
}