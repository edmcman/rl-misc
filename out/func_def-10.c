
# 1 
void strafe(float value, float *leftMotorVal, float *rightMotorVal, float *backMotorVal) {
 *leftMotorVal += value;
 *rightMotorVal += value;
 *backMotorVal -= value;
}