


# 1 
static void cpuid(int op, int *eax, int *ebx, int *ecx, int *edx){
# 68 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/liyancas/OpenVML/refs/heads/master/cmake/cpuid_x86.c"
  __asm__ __volatile__
    ("cpuid": "=a" (*eax), "=b" (*ebx), "=c" (*ecx), "=d" (*edx) : "a" (op) : "cc");


}