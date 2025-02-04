
# 1 
static char *choice_one(char *s_history, int *i, char *result)
{
 if (*i >= 0)
 {
  result = s_history;
  if (*i > 0)
   --*i;
 }
 return (result);
}