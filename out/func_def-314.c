
# 1 
void egcd(unsigned long a, unsigned long b, long *x, long *y)
{
 long x1, x2, x3, y1, y2, y3;
 unsigned long r, q;

 x1 = 1;
 x2 = 0;
 y1 = 0;
 y2 = 1;

 while (b != 0) {
  q = a / b;
  r = a % b;
  a = b;
  b = r;
  x3 = x1 - q * x2;
  x1 = x2;
  x2 = x3;
  y3 = y1 - q * y2;
  y1 = y2;
  y2 = y3;
 }
 *x = x1;
 *y = y1;
}