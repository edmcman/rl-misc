
# 1 
void limit2_u64(unsigned long* x, unsigned long lower, unsigned long upper) {
  if (*x >= upper)
    *x = upper;
  else if (*x <= lower)
    *x = lower;
}