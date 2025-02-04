
# 1 
void render_pixel_transform(double* cx, double* cy,int sx,int sy){
 *cy = -*cy;
 *cx = (*cx + 1) * ((double)sx / 2.0);
 *cy = (*cy + 1) * ((double)sy / 2.0);
}