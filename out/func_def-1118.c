
# 1 
static void
trim(char *str, int *begin_ind, int *end_ind)
{
 int b = *begin_ind;
 int e = *end_ind;
 int i;


 for(i=b; i<e; i++)
 {
  char c = str[i];
  if(c != ' ' && c != '\t' && c != '\n' && c != '\r')
   break;
 }
 *begin_ind = i;


 for(i=e-1; i>=b; i--)
 {
  char c = str[i];
  if(c != ' ' && c != '\t' && c != '\n' && c != '\r')
   break;
 }
 *end_ind = i;
}