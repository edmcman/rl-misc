
# 1 
void
lib3ds_quat_cnj(float c[4]) {
    int i;
    for (i = 0; i < 3; ++i) {
        c[i] = -c[i];
    }
}