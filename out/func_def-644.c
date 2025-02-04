
# 1 
void polyder(float p[((7) + 1)])
{
 for (int i = 1; i <= (7); ++i) {
  p[i-1] = i * p[i];
 }
 p[(7)] = 0;
}