
# 1 
char*
itoa(char* str, int num)
{
  char* p = str;
  char c;
  int i;
  int flag = 0;

  *p++ = '0';
  *p++ = 'x';

  if (0 == num)
    *p++ = '0';
  else {
    for (i = 28; i >= 0; i -= 4) {
      c = (num >> i) & 0xf;
      if (flag || (c > 0)) {
        flag = 1;
        c += '0';
        if (c > '9') {
          c += 7;
        }
        *p++ = c;
      }
    }
  }

  *p = 0;
  return str;
}