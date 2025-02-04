
# 1 
static void FindDivDiff3Coeff ( double a, double b, double c, double d, double *dd )
{



  dd[0] = (double)(1.0/((a-b)*(a-c)*(a-d)));
  dd[1] = (double)(1.0/((b-a)*(b-c)*(b-d)));
  dd[2] = (double)(1.0/((c-a)*(c-b)*(c-d)));
  dd[3] = (double)(1.0/((d-a)*(d-b)*(d-c)));
}