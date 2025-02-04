
# 1 
void cvector_cross(double *v, const double *a, const double *b) {





 v[0] = (a[1] * b[2]) - (a[2] * b[1]);
 v[1] = -((a[0] * b[2]) - (a[2] * b[0]));
 v[2] = (a[0] * b[1]) - (a[1] * b[0]);




}