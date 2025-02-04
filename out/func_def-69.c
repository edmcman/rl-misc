
# 1 
void
itoa(long n, char *buf)
{
 int i, len, sign;
 char tmp[(64 + 1)] = { 0 };
 i = len = sign = 0;

 if (n < 0) {
  sign = 1;
  n = -n;
 }

 do {
  tmp[len++] = n % 10 + '0';
 } while ((n /= 10) > 0 && len < (64 + 1) - 2);

 if (sign)
  tmp[len++] = '-';

 for (i = 0; i < len; i++)
  buf[i] = tmp[len - 1 - i];
 buf[i] = 0x0;
}