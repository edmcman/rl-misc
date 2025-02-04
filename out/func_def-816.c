#include <math.h>

#include <float.h>

#include <stdbool.h>

#include <stdlib.h>

#include <string.h>

#include <time.h>

#include <stdio.h>

# 1 
static float
get_window_scale_factor(float *input_window, float *output_window, int frame_size)
{
  float sum = 0.f;
  for (int i = 0; i < frame_size; i++)
    sum += input_window[i] * output_window[i];
  return (sum / (float)(frame_size));
}