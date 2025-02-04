
# 1 
void gl_perspective_devision(float vertex[4], float out[3])
{
    out[0] = vertex[0] / vertex[3];
    out[1] = vertex[1] / vertex[3];
    out[2] = vertex[2] / vertex[3];
}