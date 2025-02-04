
# 1 
void
lib3ds_vector_sub(float c[3], float a[3], float b[3]) {
    int i;
    for (i = 0; i < 3; ++i) {
        c[i] = a[i] - b[i];
    }
}