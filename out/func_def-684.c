
# 1 
void
hyperplane_between_points(double *p1, double *p2, double *w, double *b)
{
    w[0] = p1[1] - p2[1];
    w[1] = p2[0] - p1[0];
    *b = -(w[0]*p1[0] + w[1]*p1[1]);
}