#include <math.h>

#include <float.h>

#include <stdbool.h>

#include <stdlib.h>

#include <string.h>

#include <time.h>

#include <stdio.h>

# 1 
static void
apply_time_envelope(float *spectrum, float *spectrum_prev, float N, float release_coeff)
{
  int k;

  for (k = 0; k <= N; k++)
  {

    if (spectrum[k] > spectrum_prev[k])
    {

      spectrum[k] = release_coeff * spectrum_prev[k] + (1.f - release_coeff) * spectrum[k];
    }
  }
}