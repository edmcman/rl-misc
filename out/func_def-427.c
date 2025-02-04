
# 1 
void aux_end(unsigned int *end_ptr, int endvalue)
{
  *(volatile unsigned int *)end_ptr = endvalue;

  ({__asm__ __volatile__("nop\t#i_nop":::"memory");});
  ({__asm__ __volatile__("nop\t#i_nop":::"memory");});
  ({__asm__ __volatile__("nop\t#i_nop":::"memory");});
  ({__asm__ __volatile__("nop\t#i_nop":::"memory");});
  ({__asm__ __volatile__("nop\t#i_nop":::"memory");});
  __asm__ __volatile__ ("wait");
}