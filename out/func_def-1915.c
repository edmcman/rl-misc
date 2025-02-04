
# 1 
void
SV_AddBlend(float r, float g, float b, float a, float *v_blend)
{
 float a2, a3;

 if (a <= 0)
 {
  return;
 }

 a2 = v_blend[3] + (1 - v_blend[3]) * a;
 a3 = v_blend[3] / a2;

 v_blend[0] = v_blend[0] * a3 + r * (1 - a3);
 v_blend[1] = v_blend[1] * a3 + g * (1 - a3);
 v_blend[2] = v_blend[2] * a3 + b * (1 - a3);
 v_blend[3] = a2;
}