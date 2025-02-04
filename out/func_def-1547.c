
# 1 
void CrossProduct (float *dst, float *a, float *b)
{
 dst[0] = a[1] * b[2] - a[2] * b[1];
 dst[1] = a[2] * b[0] - a[0] * b[2];
 dst[2] = a[0] * b[1] - a[1] * b[0];
}