
# 1 
void mat44Transpose(double m[4][4], double mTrans[4][4]) {
 for (int i = 0; i < 4; i++) {
  for (int j = 0; j < 4; j++) {
   mTrans[j][i] = m[i][j];
  }
 }
}