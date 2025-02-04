
# 1 
char *ft_strcpy(char *str, const char *str2)
{
 int i;

 i = 0;
 while (str2[i])
 {
  str[i] = str2[i];
  i++;
 }
 str[i] = '\0';
 return (str);
}