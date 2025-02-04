
# 1 
void matrix_get_scale(float matrix[4*4], float x, float y, float z)
{
 int i = 0;
 for(i = 0; i < 3*4; i++)
  matrix[i] = 0;
 matrix[0] = x;
 matrix[4*1 + 1] = y;
 matrix[4*2 + 2] = z;
 matrix[4*3 + 3] = 1;
}