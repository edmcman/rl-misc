















# 1 
static unsigned long xchg(unsigned long *p, unsigned long val)
{
 return __atomic_exchange_n(p, val, 5);
}