#include <assert.h>

# 1 
static void extended_gcd_step(long vals[6])
{
  long q, r2, s2, t2;

  q = vals[0] / vals[1];
  r2 = vals[0] % vals[1];
  if (r2 < 0) {
    if (vals[1] > 0) {
      r2 += vals[1];
      q -= 1;
    }
    if (vals[1] < 0) {
      r2 -= vals[1];
      q += 1;
    }
  }
  s2 = vals[2] - q * vals[3];
  t2 = vals[4] - q * vals[5];
  vals[0] = vals[1];
  vals[1] = r2;
  vals[2] = vals[3];
  vals[3] = s2;
  vals[4] = vals[5];
  vals[5] = t2;
}