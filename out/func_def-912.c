
# 1 
void vspltisb (char *v, int val)
{
  int i;
  for (i = 0; i < 16; i++)
    v[i] = val;
}