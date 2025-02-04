
# 1 
void rotate(float value, float *leftMotorVal, float *rightMotorVal, float *backMotorVal) {
 *leftMotorVal += value;
 *rightMotorVal += value;
 *backMotorVal += value;
}