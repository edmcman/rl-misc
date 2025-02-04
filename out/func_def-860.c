
# 1 
char *r_strcpy (char *dest, const char *src)
{
  int i;
  char tmp;
  for (i = 0; ; i++) {
    tmp = src[i];

    dest[i] = tmp;
    if (src[i] == 0)
      break;
  }
  return dest;
}