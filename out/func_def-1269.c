
# 1 
static void jumpspc(int *i, char *str)
{
 *i = 0;
 while (str[*i] == ' ' || str[*i] == '\n' || str[*i] == '\t'
  || str[*i] == '\v' || str[*i] == '\f' || str[*i] == '\r')
  (*i)++;
}