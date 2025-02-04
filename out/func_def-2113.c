
# 1 
static int smallp(const float s[3]) {
    enum {X, Y, Z};
    const float eps = 1e-12;
    int cx, cy, cz;
    cx = -eps < s[X] && s[X] < eps;
    cy = -eps < s[Y] && s[Y] < eps;
    cz = -eps < s[Z] && s[Z] < eps;
    return cx && cy && cz;
}