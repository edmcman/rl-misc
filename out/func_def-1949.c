#include <math.h>

# 1 
float
dot(const float x[3], const float y[3]) {
    return x[0] * y[0] + x[1] * y[1] + x[2] * y[2];
}