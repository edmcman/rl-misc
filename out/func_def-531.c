
# 1 
float ran2(long *idum)
{
 int j;
 long k;
 static long idum2=123456789;
 static long iy=0;
 static long iv[32];
 float temp;

 if (*idum <= 0) {
  if (-(*idum) < 1) *idum=1;
  else *idum = -(*idum);
  idum2=(*idum);
  for (j=32 +7;j>=0;j--) {
   k=(*idum)/53668;
   *idum=40014*(*idum-k*53668)-k*12211;
   if (*idum < 0) *idum += 2147483563;
   if (j < 32) iv[j] = *idum;
  }
  iy=iv[0];
 }
 k=(*idum)/53668;
 *idum=40014*(*idum-k*53668)-k*12211;
 if (*idum < 0) *idum += 2147483563;
 k=idum2/52774;
 idum2=40692*(idum2-k*52774)-k*3791;
 if (idum2 < 0) idum2 += 2147483399;
 j=iy/(1+(2147483563 -1)/32);
 iy=iv[j]-idum2;
 iv[j] = *idum;
 if (iy < 1) iy += (2147483563 -1);
 if ((temp=(1.0/2147483563)*iy) > (1.0-1.2e-7)) return (1.0-1.2e-7);
 else return temp;
}