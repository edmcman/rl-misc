
# 1 
char *ft_strrev(char *str)
{
 char x;
 int a;
 int b;

 a = 0;
 b = 0;
 while (str[a] != '\0')
 {
  a++;
 }
 a--;
 while (a >= b)
 {
  x = str[a];
  str[a] = str[b];
  str[b] = x;
  a--;
  b++;
 }
 return (str);
}