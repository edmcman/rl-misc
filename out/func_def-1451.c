#include <stdlib.h>

#include <string.h>

# 1 
static void update_resistance(float *r, float new_r)
{
 *r = *r + ((new_r - *r) / 4.0);
}