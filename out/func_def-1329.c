
# 1 
static void copy(const float f[3], double d[3]) {
    enum {X, Y, Z};
    d[X] = f[X]; d[Y] = f[Y]; d[Z] = f[Z];
}