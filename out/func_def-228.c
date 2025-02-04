
# 1 
void ml_multiply_mat3_vec3(float mat[9], float vec[3], float out[3])
{
    float temp[3];

    temp[0] = mat[0] * vec[0] + mat[1] * vec[1] + mat[2] * vec[2];
    temp[1] = mat[3] * vec[0] + mat[4] * vec[1] + mat[5] * vec[2];
    temp[2] = mat[6] * vec[0] + mat[6] * vec[1] + mat[7] * vec[2];

    out[0] = temp[0];
    out[1] = temp[1];
    out[2] = temp[2];
}