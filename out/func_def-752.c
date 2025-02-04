
# 1 
void DFT16(float *A, const float *sinTab)
{
 int i, j, theta;
 float alpha, beta, beta1, beta2, y0, y1, y2, y3;
 for (i = 0; i < 16; i += 4)
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
 for (i = 0; i < 16; i += 8)
 {
  alpha = A[i];
  beta = A[i + 4];
  A[i] = alpha + beta;
  A[i + 4] = alpha - beta;
  alpha = A[i + 2];
  beta = A[i + 6];
  A[i + 2] = alpha + beta;
  A[i + 6] = alpha - beta;
  alpha = A[i + 1];
  beta1 = 0.70710678118654752440084436210485f*(A[i + 5] + A[i + 7]);
  beta2 = 0.70710678118654752440084436210485f*(A[i + 5] - A[i + 7]);
  A[i + 1] = alpha + beta1;
  A[i + 5] = alpha - beta1;
  alpha = A[i + 3];
  A[i + 3] = alpha + beta2;
  A[i + 7] = alpha - beta2;
 }
 theta = 1;
 alpha = A[0];
 beta = A[8];
 A[0] = alpha + beta;
 A[8] = alpha - beta;
 alpha = A[4];
 beta = A[12];
 A[4] = alpha + beta;
 A[12] = alpha - beta;
 for (j = 1; j < 4; j++)
 {
  y0 = sinTab[theta];
  y1 = sinTab[theta + 4];
  alpha = A[j];
  beta = A[-j + 8];
  beta1 = A[j + 8] * y1 + A[-j + 16] * y0;
  beta2 = A[j + 8] * y0 - A[-j + 16] * y1;
  theta += 1;
  A[j] = alpha + beta1;
  A[j + 8] = alpha - beta1;
  A[-j + 8] = beta + beta2;
  A[-j + 16] = beta - beta2;
 }
}