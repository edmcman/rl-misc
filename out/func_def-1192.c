
# 1 
unsigned int fmt_str(char *s,const char *t)
{
  unsigned int len;
  char ch;
  len = 0;
  if (s) { while ((ch = t[len]) != 0) s[len++] = ch; }
  else while (t[len]) len++;
  return len;
}