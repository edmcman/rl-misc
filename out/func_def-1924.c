
# 1 
void foo(int n, float* x, float* y, float* z, float* f3, float* f1, float* w) {
 int dt;

 int i, j;

 for (i = 1; i <= 14; i++)
  x[i] = 1.0;

 for (i = 1; i <= 14; i += 3)
  y[i] = 1.0;

 for (i = 14 + 1; i <= 14 + 20; i += 3)
  z[i] = 1.0;

 for (i = 0; i <= 14; i++) {
  for (j = i; j <= i + 14; j++)
   f3[i] = f3[i] + f1[j] * w[j - i];
  f3[i] = f3[i] * dt;
 }

 return 0;
}