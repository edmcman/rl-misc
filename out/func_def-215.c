
# 1 
void ml_multiply_mat3_mat3(float mat_a[9], float mat_b[9], float out[9])
{
    float temp[9];

    temp[0] = mat_a[0] * mat_b[0] + mat_a[1] * mat_b[3] + mat_a[2] * mat_b[6];
    temp[1] = mat_a[0] * mat_b[1] + mat_a[1] * mat_b[4] + mat_a[2] * mat_b[7];
    temp[2] = mat_a[0] * mat_b[2] + mat_a[1] * mat_b[5] + mat_a[2] * mat_b[8];
    temp[3] = mat_a[3] * mat_b[0] + mat_a[4] * mat_b[3] + mat_a[5] * mat_b[6];
    temp[4] = mat_a[3] * mat_b[1] + mat_a[4] * mat_b[4] + mat_a[5] * mat_b[7];
    temp[5] = mat_a[3] * mat_b[2] + mat_a[4] * mat_b[5] + mat_a[5] * mat_b[8];
    temp[6] = mat_a[6] * mat_b[0] + mat_a[7] * mat_b[3] + mat_a[8] * mat_b[6];
    temp[7] = mat_a[6] * mat_b[1] + mat_a[7] * mat_b[4] + mat_a[8] * mat_b[7];
    temp[8] = mat_a[6] * mat_b[2] + mat_a[7] * mat_b[5] + mat_a[8] * mat_b[8];

    out[0] = temp[0];
    out[1] = temp[1];
    out[2] = temp[2];
    out[3] = temp[3];
    out[4] = temp[4];
    out[5] = temp[5];
    out[6] = temp[6];
    out[7] = temp[7];
    out[8] = temp[8];
}