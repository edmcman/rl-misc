
# 1 
void
rgb2ycbcr(float *r, float *g, float *b)
{
    static float y, cb, cr;
    y = 0.2990f * *r + 0.5870f * *g + 0.1140f * *b;
    cb = -0.1687f * *r - 0.3313f * *g + 0.5000f * *b + 128.0f;
    cr = 0.5000f * *r - 0.4187f * *g - 0.0813f * *b + 128.0f;
    *r = y;
    *g = cb;
    *b = cr;
}