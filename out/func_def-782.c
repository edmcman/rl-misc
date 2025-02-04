
# 1 
void test(char * __restrict ptr1, char * __restrict ptr2, int n)
{
 int i;

 for (i = 0; *ptr1 && (i < n); i++)
  *ptr1++ = *ptr2++;
}