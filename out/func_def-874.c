
# 1 
static unsigned long _dl_div(
 unsigned long num,
 unsigned long den,
 unsigned long * rem)
{
  unsigned long quot = 0, qbit = 1;

  if (den == 0)
    return 0;

  while ((int) den >= 0) {
    den <<= 1;
    qbit <<= 1;
  }
  while (qbit) {
    if (den <= num) {
      num -= den;
      quot += qbit;
    }
    den >>= 1;
    qbit >>= 1;
  }
  if (rem)
    *rem = num;
  return quot;
}