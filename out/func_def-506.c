#include <math.h>

#include <float.h>

# 1 
static void
get_noise_statistics(float *fft_p2, int fft_size_2, float *noise_thresholds_p2,
                     float window_count)
{
  int k;


  for (k = 0; k <= fft_size_2; k++)
  {
    if (window_count <= 1.f)
    {
      noise_thresholds_p2[k] = fft_p2[k];
    }
    else
    {
      noise_thresholds_p2[k] += ((fft_p2[k] - noise_thresholds_p2[k]) / window_count);
    }
  }
}