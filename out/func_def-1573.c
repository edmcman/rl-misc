
# 1 
void nebu_Clamp( float *f, float min, float max )
{
  if(*f < min) *f = min;
  else if(*f > max) *f = max;
}