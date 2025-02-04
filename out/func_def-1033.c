#include <math.h>

# 1 
void denormH (double *F, double *A1, double *A2)
{
  double r, x, y;
  int i;

  r = A2[0]; x = A2[1]; y = A2[2];
  (*(F+6)) += x * (*F) + y*(*(F+3));
  (*(F+7)) += x * (*(F+1)) + y*(*(F+4));
  (*(F+8)) += x * (*(F+2)) + y*(*(F+5));
  (*F) *= r; (*(F+1)) *= r; (*(F+2)) *= r;
  (*(F+3)) *= r; (*(F+4)) *= r; (*(F+5)) *= r;

  r = 1/A1[0]; x = -A1[1] * r; y = -A1[2] * r;

  for (i = 0; i < 9; i+=3)
    {
      F[i] = r * F[i] + x * F[i+2];
      F[i+1] = r * F[i+1] + y * F[i+2];
    }

}