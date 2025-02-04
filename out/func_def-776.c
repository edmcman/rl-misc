
# 1 
void
ZVdotU11 (
   int n,
   double y0[],
   double x0[],
   double sums[]
) {
double i00, r00, xi0, xr0, yi0, yr0 ;
int ii, iloc, rloc ;

i00 = r00 = 0.0 ;
for ( ii = rloc = 0, iloc = 1 ; ii < n ; ii++, rloc += 2, iloc += 2 ) {
   yr0 = y0[rloc] ; yi0 = y0[iloc] ;
   xr0 = x0[rloc] ; xi0 = x0[iloc] ;
   r00 += yr0*xr0 - yi0*xi0 ; i00 += yr0*xi0 + yi0*xr0 ;
}
sums[ 0] = r00 ; sums[ 1] = i00 ;

return ; }