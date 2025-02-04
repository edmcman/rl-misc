
# 1 
void move(float value, float *leftMotorVal, float *rightMotorVal, float *backMotorVal) {
 *leftMotorVal += value;
 *rightMotorVal -= value;
}