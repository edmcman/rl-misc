
# 1 
__attribute__((noinline, noclone))
static void
NullDeref(int *ptr)
{
  ptr[10]++;
}