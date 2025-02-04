
# 1 
void str_toupper(char *str)
{
 for(; *str != '\0'; str++)
  if(*str >= 'a' && *str <= 'z')
   *str = *str - 32;
}