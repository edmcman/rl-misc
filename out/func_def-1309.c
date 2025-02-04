
# 1 
void ft_replace_chr(char *s, char c1, char c2)
{
 int i;

 i = 0;
 while (s[i])
 {
  if (s[i] == c1)
   s[i] = c2;
  i++;
 }
}