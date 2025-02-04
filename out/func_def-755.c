
# 1 
void mms_daxpy(int m, double alpha,double *x,double *y) {

 int i = 0;

 for(i=0; i< m; i++) {

  y[i] = alpha*x[i] + y [i];
 }


}