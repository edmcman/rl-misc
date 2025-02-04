
# 1 
char *ft_strcpy(char *copy, const char *src)
{
 unsigned int index;

 index = 0;
 while (src[index] != 0)
 {
  copy[index] = src[index];
  index++;
 }
 copy[index] = 0;
 return (copy);
}