
# 1 
void mat221Multiply(double m[2][2], double v[2], double mTimesV[2]) {
    mTimesV[0] = m[0][0]* v[0] + m[0][1] *v[1];
    mTimesV[1] = m[1][0]* v[0] + m[1][1] *v[1];
}