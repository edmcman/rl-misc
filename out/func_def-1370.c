
# 1 
void swt_exp2(int lev, int *outputV)
 {
  int count;
  *outputV = 1;
  if (lev>0)
  {
   for (count=0;count<lev;count++)
    *outputV = *outputV * 2;
  }
  return;
 }