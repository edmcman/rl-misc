
# 1 
void str_lower(char *t, char *s)
{
  register char ch;
  do
  {
    ch = *s++;
    *t++ = ((ch >= 'A' && ch <= 'Z') ? ch|32 : ch);
  } while (ch);
}