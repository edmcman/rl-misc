#include <stdio.h>

# 1 
char *trimstr(char *str)
{

  int i = 0;
  while (str[i] && str[i] != '\n' && (str[i] == '\t' || str[i] == ' '))
    i++;

  char *res = &str[i];

  while (str[i] && str[i] != '\t' && str[i] != ' ' && str[i] != '\n')
    i++;
  str[i] = '\n';
  str[i + 1] = 0;
  return res;
}