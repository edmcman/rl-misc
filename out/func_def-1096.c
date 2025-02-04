
# 1 
void
lib3ds_vector_scalar_mul(float c[3], float a[3], float k) {
    int i;
    for (i = 0; i < 3; ++i) {
        c[i] = a[i] * k;
    }
}