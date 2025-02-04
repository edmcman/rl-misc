#include <stddef.h>   //for NULL

# 1 
void my_inttostr(char *d, const int x)
{
  int temp = x;
  int i = 0;

  if(x == 0)
  {
    *d++ = '0';
    *d = 0;
    return;
  }

  while(temp)
  {
    temp /= 10;
    i++;
  }

  temp = x;
  if(temp < 0)
  {
    *d++ = '-';
    temp = -x;
  }
  *(d + i) = 0;

  while(temp)
  {
    *(d + i - 1) = (temp % 10) + '0';
    temp /= 10;
    i--;
  }
}