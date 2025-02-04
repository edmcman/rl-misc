



























# 1 
void p3(float *x, float *y, float *z, float t, float t1, float t2)
      {
  *x = *y;
  *y = *z;
  *x = t * (*x + *y);
  *y = t1 * (*x + *y);
  *z = (*x + *y)/t2;
  return;
      }