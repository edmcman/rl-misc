
# 1 
unsigned int dimax(unsigned int n, const double *dx, double *maxval)
{
 unsigned int im;
 --n;
 im = n;
 *maxval = dx[n];
 while(n) {
  --n;
  if(dx[n] > *maxval) {
   *maxval = dx[n];
   im = n;
  }
 }

 return im;
}