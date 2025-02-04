
# 1 
void cross3(const float* v0, const float* v1, float *r0)
{
 r0[0] = (v0[1] * v1[2]) + (-1 * v0[2] * v1[1]);
 r0[1] = (-1 * v0[0] * v1[2]) + (v0[2] * v1[0]);
 r0[2] = (v0[0] * v1[1]) + (-1 * v0[1] * v1[0]);
}