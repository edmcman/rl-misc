
# 1 
void xor_swap(int *x, int *y)
{
  if (x != y)
  {
    *x ^= *y;
    *y ^= *x;
    *x ^= *y;
  }
}