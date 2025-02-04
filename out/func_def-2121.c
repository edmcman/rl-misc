#include <stdio.h>

# 1 
float avgScore(float scores[])
{
  int i = 0;
  float sum = 0, max = 0, min = 10;
  for (i = 0; i < 8; i++)
  {
    sum += scores[i];

    if (scores[i] > max)
      max = scores[i];

    if (scores[i] < min)
      min = scores[i];
  }

  sum = sum - max - min;

  return sum / (8 - 2);
}