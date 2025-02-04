
# 1 
static void FindDivDiff5Coeff2 ( float a, float b, float c, float d,
                                 float *dd )
{




  float ba, ca, cb, da, db, dc;

  ba = (float)(1.0/(b-a)); ca = (float)(1.0/(c-a)); cb = (float)(1.0/(c-b));
  da = (float)(1.0/(d-a)); db = (float)(1.0/(d-b)); dc = (float)(1.0/(d-c));

  dd[0] = -ba*ba*ca*ca*da;
  dd[1] = (float)(-(db+2.0*cb-ba)*ba*db*cb*cb);
  dd[2] = -ba*db*cb*cb;
  dd[3] = (float)(-(dc-2.0*cb-ca)*dc*ca*cb*cb);
  dd[4] = -dc*ca*cb*cb;
  dd[5] = da*db*db*dc*dc;
}