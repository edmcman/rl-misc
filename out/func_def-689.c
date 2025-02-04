
# 1 
void DFT4(float *A, const float *sinTab)
{
 float y0, y1, y2, y3;
 y0 = A[0] + A[1];
 y1 = A[0] - A[1];
 y2 = A[2] + A[3];
 y3 = A[2] - A[3];
 A[0] = y0 + y2;
 A[2] = y0 - y2;
 A[1] = y1 + y3;
 A[3] = y1 - y3;
}