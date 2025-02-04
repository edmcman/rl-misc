
# 1 
void limit2_i16(short* x, short lower, short upper) {
  if (*x >= upper)
    *x = upper;
  else if (*x <= lower)
    *x = lower;
}