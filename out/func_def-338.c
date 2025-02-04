
# 1 
void DFT8(float *A, const float *sinTab)
{
 int i;
 float alpha, beta, beta1, beta2, y0, y1, y2, y3;
 for (i = 0; i < 8; i += 4)
 {
  alpha = A[i];
  beta = A[i + 1];
  beta1 = A[i + 2];
  beta2 = A[i + 3];
  y0 = alpha + beta;
  y1 = alpha - beta;
  y2 = beta1 + beta2;
  y3 = beta1 - beta2;
  A[i] = y0 + y2;
  A[i + 2] = y0 - y2;
  A[i + 1] = y1 + y3;
  A[i + 3] = y1 - y3;
 }
 alpha = A[0];
 A[0] = alpha + A[4];
 A[4] = alpha - A[4];
 alpha = A[2];
 A[2] = alpha + A[6];
 A[6] = alpha - A[6];
 beta1 = 0.70710678118654752440084436210485f*(A[5] + A[7]);
 beta2 = 0.70710678118654752440084436210485f*(A[5] - A[7]);
 A[5] = A[1] - beta1;
 A[1] = A[1] + beta1;
 A[7] = A[3] - beta2;
 A[3] = A[3] + beta2;
}