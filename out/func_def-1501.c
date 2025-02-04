
# 1 
void polylinear(float p[((7) + 1)], float duration, float x0, float x1)
{
 p[0] = x0;
 p[1] = (x1 - x0) / duration;
 for (int i = 2; i < ((7) + 1); ++i) {
  p[i] = 0;
 }
}