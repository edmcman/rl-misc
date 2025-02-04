
# 1 
int swap(int *i, int *j)
{
  int tmp = *i;
  *i = *j;
  *j = tmp;
  return 0;
}