
# 1 
void set_g2(float *g2,float *fc)
{
float f;

f = (1.0)/(*fc);
*g2 = ((2.0)*f - f*f)/(((1.0) - f)*((1.0) - f));
}