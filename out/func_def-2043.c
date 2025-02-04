


# 1 
int arParamIdeal2Observ( const double dist_factor[4], const double ix, const double iy,
                         double *ox, double *oy )
{
    double x, y, d;

    x = (ix - dist_factor[0]) * dist_factor[3];
    y = (iy - dist_factor[1]) * dist_factor[3];
    if( x == 0.0 && y == 0.0 ) {
        *ox = dist_factor[0];
        *oy = dist_factor[1];
    }
    else {
        d = 1.0 - dist_factor[2]/100000000.0 * (x*x+y*y);
        *ox = x * d + dist_factor[0];
        *oy = y * d + dist_factor[1];
    }

    return(0);
}