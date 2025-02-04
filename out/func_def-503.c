
# 1 
static void FindDivDiff3Coeff ( float a, float b, float c, float d, float *dd )
{



  dd[0] = (float)(1.0/((a-b)*(a-c)*(a-d)));
  dd[1] = (float)(1.0/((b-a)*(b-c)*(b-d)));
  dd[2] = (float)(1.0/((c-a)*(c-b)*(c-d)));
  dd[3] = (float)(1.0/((d-a)*(d-b)*(d-c)));
}