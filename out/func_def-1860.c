
# 1 
void
test_08 (unsigned short a, unsigned short b, unsigned int* r)
{

  unsigned short x = a + b;
  if (x > 65535)
    x = 65535;
  *r = x;
}