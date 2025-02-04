
# 1 
void mat33Transpose(double m[3][3], double mTrans[3][3]) {
 for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 3; j++) {
   mTrans[j][i] = m[i][j];
  }
 }
}