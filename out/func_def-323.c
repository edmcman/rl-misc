
# 1 
__attribute__((noinline, noclone)) signed char
fn2 (long int x, long int y, int *ovf)
{
  signed char res;
  x = (x & 63) + (0x7f / 4);
  y = (y & 3) + 4;
  *ovf = __builtin_mul_overflow (x, y, &res);
  return res;
}