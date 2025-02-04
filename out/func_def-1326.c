
# 1 
void ml_translate(float mat[16], float x, float y, float z)
{
    mat[3] += x;
    mat[7] += y;
    mat[11] += z;
}