
# 1 
unsigned int dimin(unsigned int n, const double *dx, double *minval)
{
 unsigned int im;
 --n;
 im = n;
 *minval = dx[n];
 while(n) {
  --n;
  if(dx[n] < *minval) {
   *minval = dx[n];
   im = n;
  }
 }

 return im;
}