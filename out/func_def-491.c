
# 1 
void d2r(double *ra,double *dec,int ih,double am,
           char isgn,int id,double amin)



{
double rad= 0.0174532925199;

*ra=15.0 * (ih + am / 60.) * rad;
*dec=((float)id + amin / 60.) * rad;
if (isgn == '-') *dec = -1 * *dec;
return;
}