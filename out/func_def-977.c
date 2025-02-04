
# 1 
float add_sf (float *p, float *q)
{
  float f1 = *p;
  float f2 = *q;
  __asm__ ("# reg %x0, %x1" : "+v" (f1), "+v" (f2));
  return f1 + f2;
}