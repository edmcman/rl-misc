
# 1 
char *unix_normalize (char *ans, char *name, char *ext)
{
 char *a;
 int j;

 for (a=ans,j=0; (j<8) && (name[j] > ' '); ++j,++a)
  *a = name[j];
 if(*ext > ' ') {
  *a++ = '.';
  for (j=0; j<3 && ext[j] > ' '; ++j,++a)
   *a = ext[j];
 }
 *a++ = '\0';
 return ans;
}