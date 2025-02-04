
# 1 
void limit2_i64(long* x, long lower, long upper) {
  if (*x >= upper)
    *x = upper;
  else if (*x <= lower)
    *x = lower;
}