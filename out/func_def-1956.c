
# 1 
void normalize(double *a,double *b,double *c, double *d){
  double sum = *a + *b + *c + *d;
  *a /= sum;
  *b /= sum;
  *c /= sum;
  *d /= sum;
}