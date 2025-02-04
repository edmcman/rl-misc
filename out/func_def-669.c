
# 1 
void swap_ptr(double*** a, double*** b)
{
  double** tmp = *a;
  *a = *b;
  *b = tmp;
}