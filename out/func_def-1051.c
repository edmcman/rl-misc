
# 1 
void swap(double* x,double* y){
     *x+=*y;
     *y=*x-*y;
     *x=*x-*y;
}