
# 1 
int exc_f(char *s, int *n) {
  int x = 0;
  int sg = 1;
  if(*s == '-') {
    sg = -1;
    s++;
  } else if(*s == '+') {
    s++;
  }
  for(; *s; s++) {
    if(*s >= '0' && *s <= '9') {
      x = 10 * x + sg * (*s - '0');
    } else {
      return -1;
    }
  }
  if(*s) {
    return -1;
  } else {
    *n = x;
    return 0;
  }
}