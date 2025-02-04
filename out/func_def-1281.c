
# 1 
int __attribute__((noinline))
foo (unsigned long *p, unsigned long *q)
{
  int ret;
  asm volatile ("" : "=r" (ret), "=r" (*p), "=r" (*q) : "0" (1), "1" (2), "2" (3));
  return ret;
}