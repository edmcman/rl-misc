
# 1 
void vsum(float a[3], float b[3], float ca, float cb, float v[3])
{
  v[0]=ca*a[0]+cb*b[0];
  v[1]=ca*a[1]+cb*b[1];
  v[2]=ca*a[2]+cb*b[2];
  return;
}