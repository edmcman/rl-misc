
# 1 
void fixexponent(char *s)

  {
   int c,i;

  s += 9;
  for (i=71; (c=(int)*s) && c != '/' && i--; s++)
    if (c == 'D' || c == 'd')
      *s = (char)'E';
    else if ((c<'0' || c>'9') && c != '+' && c != '-'
  && c != 'e' && c != 'E' && c != '.')
      *s = ' ';

  return;
  }