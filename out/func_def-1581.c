#include <string.h>

#include <math.h>

# 1 
void mat4f_LoadTranslation(float* v, float* mout)
{
 mout[0] = 1.0f;
 mout[1] = 0.0f;
 mout[2] = 0.0f;
 mout[3] = 0.0f;

 mout[4] = 0.0f;
 mout[5] = 1.0f;
 mout[6] = 0.0f;
 mout[7] = 0.0f;

 mout[8] = 0.0f;
 mout[9] = 0.0f;
 mout[10] = 1.0f;
 mout[11] = 0.0f;

 mout[12] = v[0];
 mout[13] = v[1];
 mout[14] = v[2];
 mout[15] = 1.0f;
}