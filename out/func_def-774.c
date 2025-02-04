
# 1 
void pixel_render_transform(double* cx, double* cy,int sx,int sy){
 *cy = -*cy;
 *cx = ((2.0 * *cx) / (double)sx) - 1;
 *cy = ((2.0 * *cy) / (double)sy) + 1;
}