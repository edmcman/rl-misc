
# 1 
void
itox(unsigned long n, char *buf)
{
 int i, len;
 char tmp[(64 + 1)] = { 0 };
 i = len = 0;
 static const char hex[] = {
  '0', '1', '2', '3', '4', '5',
  '6', '7', '8', '9', 'a', 'b',
  'c', 'd', 'e', 'f' };

 do {
  tmp[len++] = hex[n % 16];
 } while ((n /= 16) > 0 && len < (64 + 1) - 1);

 for (i = 0; i < len; i++)
  buf[i] = tmp[len - 1 - i];
 buf[i] = 0x0;
}