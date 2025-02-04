
# 1 
static void count(char const *s, int *x, int *y, int *z)
{
 int i;

 i = 0;
 *x = 0;
 *y = 0;
 while ((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n'))
  i++;
 if (s[i] == '\0')
  *z = i;
 *x = i;
 i = 0;
 while (s[i] != '\0')
  i++;
 i--;
 while ((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n'))
  i--;
 *y = i;
}