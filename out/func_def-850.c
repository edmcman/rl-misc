#include <string.h>

#include <float.h>

# 1 
void SENNA_nn_max(float *value_, int *idx_, float *input, int input_size)
{
  float value = -FLT_MAX;
  int idx = -1;
  int i;

  for(i = 0; i < input_size; i++)
  {
    if(input[i] > value)
    {
      value = input[i];
      idx = i;
    }
  }

  if(value_)
    *value_ = value;

  if(idx_)
    *idx_ = idx;
}