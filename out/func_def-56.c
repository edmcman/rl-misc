
# 1 
static char *kill_trailingn(char *s, char t, char *e)



{
if (e==s) *e = '\0';
else if (e>s) {
  while (e>s && *--e==t){;}
  e[*e==t?0:1] = '\0';
} return s; }