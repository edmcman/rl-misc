#include <assert.h>

#include <math.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
static int rcl_check (float *p_row, float *p_col, float *p_lev,
             float rcl_max[3])
{

    if (rcl_max == 0) return 0;


    if (*p_row < 0.0)
    {
        if (-(*p_row) > 0.005) return 0;
        *p_row = 0.0;
    }
    else if (*p_row > rcl_max[0])
    {
        if ((*p_row - rcl_max[0]) > 0.005) return 0;
        *p_row = rcl_max[0];
    }

    if (*p_col < 0.0)
    {
        if (-(*p_col) > 0.005) return 0;
        *p_col = 0.0;
    }
    else if (*p_col > rcl_max[1])
    {
        if ((*p_col - rcl_max[1]) > 0.005) return 0;
        *p_col = rcl_max[1];
    }

    if (rcl_max[2] == 0.0)
    {
        *p_lev = 0.0;
    }
    else
    {
        if (*p_lev < 0.0)
        {
            if (-(*p_lev) > 0.005) return 0;
            *p_lev = 0.0;
        }
        else if (*p_lev > rcl_max[2])
        {
            if ((*p_lev - rcl_max[2]) > 0.005) return 0;
            *p_lev = rcl_max[2];
        }
    }


    return 1;
}