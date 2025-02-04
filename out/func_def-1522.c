#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <GL/gl.h>

# 1 
void
omul_scale(GLfloat m[], GLfloat x, GLfloat y, GLfloat z)
{
    m[0 ] *= x;
    m[1 ] *= x;
    m[2 ] *= x;
    m[3 ] *= x;

    m[4 ] *= y;
    m[5 ] *= y;
    m[6 ] *= y;
    m[7 ] *= y;

    m[8 ] *= z;
    m[9 ] *= z;
    m[10] *= z;
    m[11] *= z;
}