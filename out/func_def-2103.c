#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <stdint.h>

#include <stdbool.h>

# 1 
char* appendInt(char* text, int intValue)
{
  char* ptrText = text;
  int value = intValue;
  int div = 1000000000;
  bool zeroIsSignificant = false;
  if (value < 0)
  {
    value = -value;
    *ptrText = '-';
    ptrText++;
  }
  do
  {
    int quot = value / div;
    if ((quot != 0) || zeroIsSignificant)
    {
      zeroIsSignificant = true;
      *ptrText = (char)quot + '0';
      ptrText++;
      value -= quot * div;
    }
    div /= 10;
  } while (div > 1);
  *ptrText = (char)value + '0';
  ptrText++;
  *ptrText = 0;
  return ptrText;
}