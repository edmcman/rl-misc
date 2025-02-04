
# 1 
void rotation_matrix(double q[4], double U[3][3])
 {







  double q0,q1,q2,q3,b0,b1,b2,b3,q00,q01,q02,q03,q11,q12,q13,q22,q23,q33;


  q0 = q[0];
  q1 = q[1];
  q2 = q[2];
  q3 = q[3];

  b0 = 2.0e0*q0;
  b1 = 2.0e0*q1;

  q00 = b0*q0-1.0e0;
  q02 = b0*q2;
  q03 = b0*q3;

  q11 = b1*q1;
  q12 = b1*q2;
  q13 = b1*q3;

  b2 = 2.0e0*q2;
  b3 = 2.0e0*q3;

  q01 = b0*q1;
  q22 = b2*q2;
  q23 = b2*q3;
  q33 = b3*q3;

  U[0][0] = q00+q11;
  U[0][1] = q12-q03;
  U[0][2] = q13+q02;

  U[1][0] = q12+q03;
  U[1][1] = q00+q22;
  U[1][2] = q23-q01;

  U[2][0] = q13-q02;
  U[2][1] = q23+q01;
  U[2][2] = q00+q33;

  return;

 }