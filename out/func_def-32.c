
# 1 
static char *ft_saveitoa(int size, unsigned int n, char *nb, int neg)
{
 int j;

 j = 0;
 if (neg)
 {
  nb[j] = '-';
  j++;
 }
 while (size > 0)
 {
  nb[j] = (n / size) + '0';
  n = n % size;
  size = size / 10;
  j++;
 }
 nb[j] = '\0';
 return (nb);
}