
# 1 
void vector3d_skew_plus_identity(float *v,float* m){
        m[0*3+0]=1;
        m[0*3+1]=-v[2];
        m[0*3+2]=v[1];
        m[1*3+0]=v[2];
        m[1*3+1]=1;
        m[1*3+2]=-v[0];
        m[2*3+0]=-v[1];
        m[2*3+1]=v[0];
        m[2*3+2]=1;
}