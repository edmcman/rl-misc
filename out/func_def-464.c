
# 1 
int htoi(const char *str, int *result)
{
 int c;

 if (str[0] == '0' && str[1] == 'x')
  str += 2;

 for (*result = 0; (c = *str) != 0; str++)
 {
  if ( c >= 'a' && c <= 'f')
   c = c - 'a' + 10;
  else if (c >= 'A' && c <= 'F')
   c = c - 'A' + 10;
  else if (c >= '0' && c <= '9')
   c -= '0';
  else
   return 0;

  *result = *result << 4 | c;
 }
 return 1;
}