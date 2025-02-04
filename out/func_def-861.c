
# 1 
char *ft_str_toupper(char *str)
{
 char *res;

 res = str;
 while (*str)
 {
  if (*str <= 'z' && *str >= 'a')
   *str -= 32;
  str++;
 }
 return (res);
}