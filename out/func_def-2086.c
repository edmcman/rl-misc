
# 1 
void f1(int n, float a, float x[], float y[]) {
  int i;
  for (i = 0; i < n; ++i)
    y[i] = y[i] - a * x[i];
}