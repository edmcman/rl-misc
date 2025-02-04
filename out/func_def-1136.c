
# 1 
void limit2_i8(char* x, char lower, char upper) {
  if (*x >= upper)
    *x = upper;
  else if (*x <= lower)
    *x = lower;
}