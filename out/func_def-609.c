
# 1 
void limit2_u32(unsigned int* x, unsigned int lower, unsigned int upper) {
  if (*x >= upper)
    *x = upper;
  else if (*x <= lower)
    *x = lower;
}