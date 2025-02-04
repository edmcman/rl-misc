
# 1 
static void FindDivDiff4Coeff ( float a, float b, float c, float d, float e,
                                float *dd )
{



  dd[0] = (float)(1.0/((a-b)*(a-c)*(a-d)*(a-e)));
  dd[1] = (float)(1.0/((b-a)*(b-c)*(b-d)*(b-e)));
  dd[2] = (float)(1.0/((c-a)*(c-b)*(c-d)*(c-e)));
  dd[3] = (float)(1.0/((d-a)*(d-b)*(d-c)*(d-e)));
  dd[4] = (float)(1.0/((e-a)*(e-b)*(e-c)*(e-d)));
}