
# 1 
void byte_order_(int *i)
{
  int one = 1;
  char* endptr = (char *) &one;
  *i = (*endptr);
  return;
}