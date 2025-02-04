

# 1 
static void
cpuid(int index, int regs[4])
{
  unsigned int eax, ebx, ecx, edx;

  __asm("cpuid" : "=a"(eax), "=b" (ebx), "=c"(ecx), "=d"(edx)
        : "0"(index));
# 53 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/AlexeySa/rspamd/refs/heads/master/contrib/libottery/ottery_cpuinfo.c"
  regs[0] = eax;
  regs[1] = ebx;
  regs[2] = ecx;
  regs[3] = edx;
}