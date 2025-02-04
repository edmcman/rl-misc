
# 1 
void cross(double p[3], double q[3], double s[3])
 {






  s[0] = p[1]*q[2] - p[2]*q[1];

  s[1] = p[2]*q[0] - p[0]*q[2];

  s[2] = p[0]*q[1] - p[1]*q[0];

  return;

 }