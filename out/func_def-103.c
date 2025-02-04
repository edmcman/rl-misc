
# 1 
static void itoa(int value,char *buf, int base)
{
 char *str = buf;
 int divisor = 10;

 if (base == 'x')
 {
  divisor = 16;
 }

 do
 {
  int remainder = value % divisor;

  if (remainder <10)
  {
   *str++ = '0' + remainder;
  }
  else
  {
   *str++ = ('a' + (remainder-10));
  }
 }while (value /= divisor);

 *str = 0;

 char *p1, *p2;
 p1 = buf;
 p2= str-1;


 while (p1 < p2)
 {
  char tmp = *p1;
  *p1=*p2;
  *p2=tmp;
  p1++;
  p2--;
 }
}