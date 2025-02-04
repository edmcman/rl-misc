
# 1 
float _g1h_Integralf ( int hole_k, int nknsq, float *jac,
                       unsigned short supp1, float *func1,
                       unsigned short supp2, float *func2 )
{
  int i, k;
  double s;
  unsigned short supp;
  float *f1, *f2, *jc;

  supp = (unsigned short)(supp1 & supp2);
  s = 0.0;
  for ( k = 0; k < hole_k; k++ )
    if ( supp & (0x0001 << k) ) {
      jc = &jac[k*nknsq];
      f1 = &func1[k*nknsq];
      f2 = &func2[k*nknsq];
      for ( i = 0; i < nknsq; i++ )
        s += f1[i]*f2[i]*jc[i];
    }
  s /= (double)(nknsq);
  return (float)s;
}