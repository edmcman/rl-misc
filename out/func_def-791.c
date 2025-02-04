







# 1 
void mult_big_signed(int a,
                     int b,
                     unsigned int *hi,
                     unsigned int *lo)
{
   unsigned int ahi, alo, bhi, blo;
   unsigned int c0, c1, c2;
   int c1_a, c1_b;

   ahi = a >> 16;
   alo = a & 0xffff;
   bhi = b >> 16;
   blo = b & 0xffff;

   c0 = alo * blo;
   c1_a = ahi * blo;
   c1_b = alo * bhi;
   c2 = ahi * bhi;

   c2 += (c1_a >> 16) + (c1_b >> 16);
   c1 = (c1_a & 0xffff) + (c1_b & 0xffff) + (c0 >> 16);
   c2 += (c1 >> 16);
   c0 = (c1 << 16) + (c0 & 0xffff);
   *hi = c2;
   *lo = c0;
}