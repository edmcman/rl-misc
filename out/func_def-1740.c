
# 1 
int dquote_check(char *str, int *i)
{
 int count;

 count = 1;
 ++*i;
 while (str[*i] != '"' && str[*i])
 {
  if (str[*i] == '\\')
   ++*i;
  ++*i;
 }
 if (str[*i] == '"')
  count = 0;
 return (count);
}