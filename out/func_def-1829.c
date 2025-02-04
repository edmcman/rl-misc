
# 1 
unsigned int ft_pop_sign(int n, int *sign)
{
 unsigned int buff;

 *sign = 0;
 if (n < 0)
 {
  *sign = 1;
  buff = (unsigned int)(n * -1);
 }
 else
  buff = (unsigned int)n;
 return (buff);
}