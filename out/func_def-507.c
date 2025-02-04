



# 1 
char *removeChar(char *s, char c) {
 int n = 0;
 char *sp = s;

 do {
  if(*sp == c)
   n++;
  else
   *(sp-n) = *sp;
 } while (*sp++ != '\0');

 return s;
}