#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <math.h>

# 1 
void calc_diff_kernel(float diff_kernel[])
{
diff_kernel[0] = -1.0f/12.0f;
diff_kernel[1] = 8.0f/12.0f;
diff_kernel[2] = 0.0f;
diff_kernel[3] = -8.0f/12.0f;
diff_kernel[4] = 1.0f/12.0f;
}