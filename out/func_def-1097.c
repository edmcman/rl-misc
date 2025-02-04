
# 1 
int check_par(char *str, int *i)
{
 int opar;
 int cpar;

 opar = 0;
 cpar = 0;
 while (str[*i])
 {
  if (str[*i] == '(')
   opar++;
  if (str[*i] == ')')
   cpar++;
  ++*i;
 }
 if (opar > cpar)
  return (1);
 else if (cpar > opar)
  return (2);
 else
  return (0);
}