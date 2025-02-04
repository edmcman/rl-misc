#include <string.h>

#include <math.h>

# 1 
static int
chk_args (unsigned char *dest_ptr, int dest_width, int dest_height,
    int dest_pitch, int dest_x, int dest_y, int dest_dx, int dest_dy,
    unsigned char *src_ptr, int src_width, int src_height,
    int src_pitch, int src_x, int src_y, int src_dx, int src_dy,
    int *p_scale_x, int *p_scale_y)
{

    if (((unsigned)dest_ptr & 3) || (dest_pitch & 3) ||
        ((unsigned)src_ptr & 3) || (src_pitch & 3) ||

        dest_width <= 0 || dest_height <= 0 ||
        src_width <= 0 || src_height <= 0 ||

        dest_x < 0 || dest_y < 0 || dest_dx <= 0 || dest_dy <= 0 ||
        src_x < 0 || src_y < 0 || src_dx <= 0 || src_dy <= 0 ||

        dest_width < dest_x + dest_dx || dest_height < dest_y + dest_dy ||
        src_width < src_x + src_dx || src_height < src_y + src_dy)
        goto fail;


    if (dest_dx == src_dx) *p_scale_x = 1;
    else if (dest_dx == 2 * src_dx) *p_scale_x = 2;
    else goto fail;
    if (dest_dy == src_dy) *p_scale_y = 1;
    else if (dest_dy == 2 * src_dy) *p_scale_y = 2;
    else goto fail;


    return 1;


fail:
    return 0;
}