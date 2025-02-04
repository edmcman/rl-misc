
# 1 
void
lib3ds_quat_neg(float c[4]) {
    int i;
    for (i = 0; i < 4; ++i) {
        c[i] = -c[i];
    }
}