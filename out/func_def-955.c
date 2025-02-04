
# 1 
void SizeHUDString (char *string, int *w, int *h)
{
 int lines, width, current;

 lines = 1;
 width = 0;

 current = 0;
 while (*string)
 {
  if (*string == '\n')
  {
   lines++;
   current = 0;
  }
  else
  {
   current++;
   if (current > width)
    width = current;
  }
  string++;
 }

 *w = width * 8;
 *h = lines * 8;
}