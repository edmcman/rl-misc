
# 1 
short *A2W(const char *s, short *d, unsigned int cnt)
  {
  short *ret=d;
  if (!s || !d || !cnt) return ((void *)0);
  while (cnt-- && *s) *d++=(short)*s++;
  if (cnt) *d=0;
  return ret;
  }