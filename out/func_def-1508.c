
# 1 
void polystretchtime(float p[((7) + 1)], float s)
{
 float recip = 1.0f / s;
 float scale = recip;
 for (int i = 1; i < ((7) + 1); ++i) {
  p[i] *= scale;
  scale *= recip;
 }
}