
# 1 
static int wordsnum(const char *s, int *l, char c)
{
 int words;

 *l = -1;
 words = 0;
 while (s && s[++*l])
  if ((*l == 0 || s[*l - 1] == c) && s[*l] != c)
   words++;
 return (words);
}