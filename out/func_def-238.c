
# 1 
char *ope_finder(char *token, int i, char c, char *str)
{
  if (*str == '\0')
    token[i] = '\0';
  else
    {
      while (*str == ' ')
 (str)++;
      if (*str == '+' || *str == '-' || *str == '*' || *str == '/'
   || *str == '%' || *str == '(' || *str == ')')
 {
   token[i] = *str;
   token[i + 1] = '\0';
 }
      else
 {
   c = *str;
   while (c >= '0' && c <= '9')
     {
       token[i++] = c;
       (str)++;
       c = *str;
     }
   token[i] = '\0';
 }
    }
  return (token);
}