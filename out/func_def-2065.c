
# 1 
void
ZVdotC23 (
   int n,
   double y0[],
   double y1[],
   double x0[],
   double x1[],
   double x2[],
   double sums[]
) {
double i00, i01, i02, i10, i11, i12,
         r00, r01, r02, r10, r11, r12,
         xi0, xi1, xi2, xr0, xr1, xr2, yi0, yi1, yr0, yr1 ;
int ii, iloc, rloc ;

i00 = i01 = i02 = i10 = i11 = i12
    = r00 = r01 = r02 = r10 = r11 = r12 = 0.0 ;
for ( ii = rloc = 0, iloc = 1 ; ii < n ; ii++, rloc += 2, iloc += 2 ) {
   yr0 = y0[rloc] ; yi0 = y0[iloc] ;
   yr1 = y1[rloc] ; yi1 = y1[iloc] ;
   xr0 = x0[rloc] ; xi0 = x0[iloc] ;
   xr1 = x1[rloc] ; xi1 = x1[iloc] ;
   xr2 = x2[rloc] ; xi2 = x2[iloc] ;
   r00 += yr0*xr0 + yi0*xi0 ; i00 += yr0*xi0 - yi0*xr0 ;
   r01 += yr0*xr1 + yi0*xi1 ; i01 += yr0*xi1 - yi0*xr1 ;
   r02 += yr0*xr2 + yi0*xi2 ; i02 += yr0*xi2 - yi0*xr2 ;
   r10 += yr1*xr0 + yi1*xi0 ; i10 += yr1*xi0 - yi1*xr0 ;
   r11 += yr1*xr1 + yi1*xi1 ; i11 += yr1*xi1 - yi1*xr1 ;
   r12 += yr1*xr2 + yi1*xi2 ; i12 += yr1*xi2 - yi1*xr2 ;
}
sums[ 0] = r00 ; sums[ 1] = i00 ;
sums[ 2] = r01 ; sums[ 3] = i01 ;
sums[ 4] = r02 ; sums[ 5] = i02 ;
sums[ 6] = r10 ; sums[ 7] = i10 ;
sums[ 8] = r11 ; sums[ 9] = i11 ;
sums[10] = r12 ; sums[11] = i12 ;

return ; }