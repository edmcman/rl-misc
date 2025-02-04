#include <stdio.h>

# 1 
void MinusculasMayusculas(char str[])
{
  int i = 0, desp = 'a' - 'A';

  for (i = 0; str[i] != '\0'; ++i)
    if (str[i] >= 'a' && str[i] <= 'z')
      str[i] = str[i] - desp;
}