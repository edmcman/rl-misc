
# 1 
int foo(int *p) {
  if((*p = 0)) {
    return 32;
  }
  return 52;
}