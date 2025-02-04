
# 1 
char * strconv_int_dec(int n, char *string)
{
 if(n==0) {
  string[0] = '0';
  string[1] = '\0';
 }
 else {
  int i;
  int cpt;
  int start = 0;

  if (n<0) {
   start=1;
   string[0] = '-';
   n *= -1;
  }
  for (i = 1, cpt = 1; n / i >= 10; i *= 10, cpt++);
  for (cpt = start; i; cpt++, i /= 10) string[cpt] = (n / i) % 10 + '0';
  string[cpt] = '\0';
 }

 return string;
}