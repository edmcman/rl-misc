
# 1 
void mat441Multiply(double m[4][4], double v[4], double mTimesV[4]) {
 for (int i = 0; i < 4; i++) {
        double sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += m[i][j]*v[j];
        }
        mTimesV[i] = sum;
    }
}