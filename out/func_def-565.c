
# 1 
static void ne_post_filter4_double(double _x[4],const double _y[4],
 const int _f[4]){
  double t[4];
  t[3]=_y[0]-_y[3];
  t[2]=_y[1]-_y[2];
  t[1]=_y[1]-(t[2]/2);
  t[0]=_y[0]-(t[3]/2);
  t[2]-=t[3]*_f[3]/(1<<(4));
  t[3]-=t[2]*_f[2]/(1<<(4));
  t[3]=t[3]*(1<<(4))/_f[1];
  t[2]=t[2]*(1<<(4))/_f[0];
  t[0]+=t[3]/2;
  _x[0]=t[0];
  t[1]+=t[2]/2;
  _x[1]=t[1];
  _x[2]=(t[1]-t[2]);
  _x[3]=(t[0]-t[3]);
}