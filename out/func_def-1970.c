
# 1 
__attribute__((noinline, noclone)) unsigned char
fn3 (unsigned char x, unsigned char y, int *ovf)
{
  unsigned char res;
  x = (x & 63) + ((unsigned char) ~0 - 65);
  y = (y & 3);
  *ovf = __builtin_add_overflow (x, y, &res);
  return res;
}