
# 1 
void
f1 (int a[][16], int b[][16])
{
  for (int i = 0; i < 16; ++i)
    a[0][i] += b[0][i];
}