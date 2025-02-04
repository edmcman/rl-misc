
# 1 
float prod_misto(float *x, float *y, float *z){
 return x[0]*y[1]*z[2] + y[0]*z[1]*x[2] + z[0]*x[1]*y[2] - y[0]*x[1]*z[2] - x[0]*z[1]*y[2] - z[0]*y[1]*x[2];
}