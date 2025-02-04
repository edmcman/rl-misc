#include <math.h>

# 1 
void T_alphaFromQuat(double T_alpha[4][3],double q[4])
{

 double q0;
 double q1;
 double q2;
 double q3;



 q0 = q[0]/2.0;
 q1 = q[1]/2.0;
 q2 = q[2]/2.0;
 q3 = q[3]/2.0;



 T_alpha[0][0] = q1;
 T_alpha[0][1] = q2;
 T_alpha[0][2] = q3;

 T_alpha[1][0] = -q0;
 T_alpha[1][1] = -q3;
 T_alpha[1][2] = q2;

 T_alpha[2][0] = q3;
 T_alpha[2][1] = -q0;
 T_alpha[2][2] = -q1;

 T_alpha[3][0] = -q2;
 T_alpha[3][1] = q1;
 T_alpha[3][2] = -q0;



}