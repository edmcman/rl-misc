
# 1 
void gammaFit(double L[], double gammaParams[]) {

 double lMomentRatio, pi, t, t2, t3;

 pi = 3.14159265358979;
 lMomentRatio = L[2] / L[1];

 if (lMomentRatio > 0.0 && lMomentRatio < 0.5) {
   t = pi * lMomentRatio*lMomentRatio;
   t2 = t*t;
   t3 = t2*t;
   gammaParams[1] = (1 - 0.308*t) / (t - 0.05812*t2 + 0.01765*t3);
   gammaParams[0] = L[1] / gammaParams[1];
 }
 else if (lMomentRatio >= 0.5 && lMomentRatio < 1) {
   t = 1 - lMomentRatio;
   t2 = t*t;
   gammaParams[1] = (0.7213*t - 0.5947*t2) / (1 - 2.1817*t + 1.2113*t2);
   gammaParams[0] = L[2] / gammaParams[1];
 }


}