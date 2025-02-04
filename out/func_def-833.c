
# 1 
void
zmul(double *x, double *y, double *u)
{
double Re, Im;
   Re = x[0]*y[0] - x[1]*y[1] ;
   Im = x[0]*y[1] + x[1]*y[0] ;
   u[0] = Re;
   u[1] = Im;

   return ;
}