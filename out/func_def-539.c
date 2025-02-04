
# 1 
static char *

yystpcpy (char *yydest, const char *yysrc)





{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}