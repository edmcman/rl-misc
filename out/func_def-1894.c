
# 1 
char *my_revstr(char *str)
{
  int i;
  int l;
  char c;

  l = 0;
  while (str[l] != '\0')
    {
      l = l + 1;
    }
  i = 0;
  while (i < l / 2)
    {
      c = str[i];
      str[i] = str[l - i - 1];
      str[l - i - 1] = c;
      i = i + 1;
    }
  return (str);
}