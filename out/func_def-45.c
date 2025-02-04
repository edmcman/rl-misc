





# 1 
char *Util_strupper(char *s)
{
 char *p;
 for (p = s; *p != '\0'; p++)
  if (*p >= 'a' && *p <= 'z')
   *p += 'A' - 'a';
 return s;
}