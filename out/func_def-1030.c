
# 1 
void
ZVdotC12 (
   int n,
   double y0[],
   double x0[],
   double x1[],
   double sums[]
) {
double i00, i01, r00, r01, xi0, xi1, xr0, xr1, yi0, yr0 ;
int ii, iloc, rloc ;

i00 = i01 = r00 = r01 = 0.0 ;
for ( ii = rloc = 0, iloc = 1 ; ii < n ; ii++, rloc += 2, iloc += 2 ) {
   yr0 = y0[rloc] ; yi0 = y0[iloc] ;
   xr0 = x0[rloc] ; xi0 = x0[iloc] ;
   xr1 = x1[rloc] ; xi1 = x1[iloc] ;
   r00 += yr0*xr0 + yi0*xi0 ; i00 += yr0*xi0 - yi0*xr0 ;
   r01 += yr0*xr1 + yi0*xi1 ; i01 += yr0*xi1 - yi0*xr1 ;
}
sums[ 0] = r00 ; sums[ 1] = i00 ;
sums[ 2] = r01 ; sums[ 3] = i01 ;

return ; }