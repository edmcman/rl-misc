
# 1 
static void FindDivDiff5Coeff1 ( float a, float b, float c,
                                 float *dd )
{




  float ba, ca, cb;

  ba = (float)(1.0/(b-a)); ca = (float)(1.0/(c-a)); cb = (float)(1.0/(c-b));

  dd[1] = ba*ba*ca*ca;
  dd[0] = (float)(2.0*(ca+ba)*dd[1]);
  dd[3] = cb*cb*ba*ba;
  dd[2] = (float)(2.0*(cb-ba)*dd[3]);
  dd[5] = cb*cb*ca*ca;
  dd[4] = (float)(-2.0*(cb+ca)*dd[5]);
}