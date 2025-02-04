#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <string.h>

# 1 
float det3(float m[][3])
{ return m[0][0]*m[1][1]*m[2][2]
        - m[0][0]*m[1][2]*m[2][1]
        + m[0][1]*m[1][2]*m[2][0]
        - m[0][1]*m[1][0]*m[2][2]
        + m[0][2]*m[1][0]*m[2][1]
        - m[0][2]*m[1][1]*m[2][0];
}