
# 1 
static char * get_name(char * old_name, char string[12])
{
  int c;
  char *np, *rnp;

  np = string;
  rnp = old_name;
  while ( (c = *rnp) == '/') rnp++;

  while ( rnp < &old_name[128] && c != '/' && c != '\0') {
 if (np < &string[12]) *np++ = c;
 c = *++rnp;
  }

  while (c == '/' && rnp < &old_name[128]) c = *++rnp;

  if (np < &string[12]) *np = '\0';

  return(rnp);
}