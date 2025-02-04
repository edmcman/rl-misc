#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <GL/gl.h>

# 1 
void
omul_multiply_vertex_ip(GLfloat m[], GLfloat v[], GLint off)
{

    float x = v[off ];
    float y = v[off + 1];
    float z = v[off + 2];

    v[off ] = m[0] * x + m[4] * y + m[8 ] * z + m[12];
    v[off + 1] = m[1] * x + m[5] * y + m[9 ] * z + m[13];
    v[off + 2] = m[2] * x + m[6] * y + m[10] * z + m[14];
}