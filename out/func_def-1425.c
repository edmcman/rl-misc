
# 1 
int dsplint( double *xa, double *ya, double *y2a,
             int n, double x, double *y )
{


    static int nsave = 0, khi, klo;

    int i__1, i__2, k;
    double a, b, h__;




    --y2a;
    --ya;
    --xa;


    if ( n != nsave )
    {

        nsave = n;
        klo = 1;
        khi = n;
        if ( xa[klo] > x )
        {
            return 1;
        }
        if ( xa[khi] < x )
        {
            return 2;
        }
    }
    else
    {


        if ( xa[klo] > x )
        {

            khi = ( ( ( 2 ) > ( klo ) ) ? ( 2 ) : ( klo ) );
            klo = khi - 1;

            if ( xa[klo] > x )
            {
                klo = 1;
            }
            if ( xa[klo] > x )
            {
                return 1;
            }
        }
        else if ( xa[khi] <= x )
        {


            i__1 = khi, i__2 = n - 1;
            klo = ( ( ( i__1 ) < ( i__2 ) ) ? ( i__1 ) : ( i__2 ) );
            khi = klo + 1;

            if ( xa[khi] <= x )
            {
                khi = n;
            }
            if ( xa[khi] < x )
            {
                return 2;
            }
        }
    }
    while ( khi - klo > 1 )
    {
        k = ( khi + klo ) / 2;
        if ( xa[k] > x )
        {
            khi = k;
        }
        else
        {
            klo = k;
        }
    }
    h__ = xa[khi] - xa[klo];
    if ( h__ <= 0. )
    {
        return 3;
    }
    a = ( xa[khi] - x ) / h__;
    b = ( x - xa[klo] ) / h__;
    *y = a * ya[klo] + b * ya[khi] + ( a * ( a * a - 1. ) * y2a[klo] + b * ( b *
                                                                             b - 1. ) * y2a[khi] ) * ( h__ * h__ ) / 6.;



    return 0;
}