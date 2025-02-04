
# 1 
double lagrange3(double *temp, float *q, double t){

  double A0D1, A0D2, A1D1, A1D2, A2D1, A2D2;

  A0D1 = temp[0] - temp[1];
  A0D2 = temp[0] - temp[2];
  A1D1 = temp[1] - temp[0];
  A1D2 = temp[1] - temp[2];
  A2D1 = temp[2] - temp[0];
  A2D2 = temp[2] - temp[1];

  return q[0] * (t-temp[1]) * (t-temp[2]) / (A0D1*A0D2) +
         q[1] * (t-temp[0]) * (t-temp[2]) / (A1D1*A1D2) +
         q[2] * (t-temp[0]) * (t-temp[1]) / (A2D1*A2D2);

}