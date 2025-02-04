
# 1 
int my_swap(int *a, int *b)
{
  int cp_b;

  cp_b = *b;
  *b = *a;
  *a = cp_b;
  return (0);
}