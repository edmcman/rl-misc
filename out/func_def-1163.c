#include <stdio.h>

# 1 
int verifyxy(int *x, int *y)
{
  int flag = 0;

  if (*x < 0)
  {
    *x = 0;
    flag++;
  }
  if (*y < 0)
  {
    *y = 0;
    flag++;
  }
  if (*x >= 67)
  {
    *x = 67 - 1;
    flag++;
  }
  if (*y >= 17)
  {
    *y = 17 - 1;
    flag++;
  }
  return (flag);
}