
# 1 
static char *ft_revers(char *str)
{
 int i;
 int e;
 char buff;

 i = 0;
 e = 0;
 while (str[e])
  e++;
 e--;
 while (i < e)
 {
  buff = str[i];
  str[i] = str[e];
  str[e] = buff;
  i++;
  e--;
 }
 return (str);
}