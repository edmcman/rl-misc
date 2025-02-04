#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <GL/gl.h>

# 1 
void
omul_multiply_vertex(GLfloat out[], GLfloat m[], GLfloat v[], GLint off)
{

    out[0] = m[0] * v[off] + m[4] * v[off + 1] + m[8 ] * v[off + 2] + m[12];
    out[1] = m[1] * v[off] + m[5] * v[off + 1] + m[9 ] * v[off + 2] + m[13];
    out[2] = m[2] * v[off] + m[6] * v[off + 1] + m[10] * v[off + 2] + m[14];
}