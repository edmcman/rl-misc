
# 1 
int get_val_impl(int *p, int x)
{
  if (x > 0)
  {
    *p = x;
    return 0;
  }
  return 1;
}