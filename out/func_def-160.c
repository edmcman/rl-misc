
# 1 
void
ycbcr2rgb(float *y, float *cb, float *cr)
{
    static float r, g, b;
    r = *y + 1.40200f * (*cr - 128.0f);
    g = *y - 0.34414f * (*cb - 128.0f) - 0.71414f * (*cr - 128.0f);
    b = *y + 1.77200f * (*cb - 128.0f);
    *y = r;
    *cb = g;
    *cr = b;
}