
# 1 
void
lib3ds_matrix_neg(float m[4][4]) {
    int i, j;

    for (j = 0; j < 4; j++) {
        for (i = 0; i < 4; i++) {
            m[j][i] = -m[j][i];
        }
    }
}