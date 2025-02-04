
# 1 
void
lib3ds_matrix_translate(float m[4][4], float x, float y, float z) {
    int i;

    for (i = 0; i < 3; i++) {
        m[3][i] += m[0][i] * x + m[1][i] * y + m[2][i] * z;
    }
}