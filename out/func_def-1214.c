
# 1 
void cquat_mul(double *q, const double *a, const double *b) {







 q[0] = ( a[0]*b[3]) + ( a[1]*b[2]) + (-a[2]*b[1]) + (a[3]*b[0]);
 q[1] = (-a[0]*b[2]) + ( a[1]*b[3]) + ( a[2]*b[0]) + (a[3]*b[1]);
 q[2] = ( a[0]*b[1]) + (-a[1]*b[0]) + ( a[2]*b[3]) + (a[3]*b[2]);

 q[3] = (-a[0]*b[0]) + (-a[1]*b[1]) + (-a[2]*b[2]) + (a[3]*b[3]);







}