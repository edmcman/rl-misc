
# 1 
void swt_min(double *sigIn, int sigInLength, double *sigMin)
 {
  int count;

  *sigMin = sigIn[0];
  for(count=1;count<sigInLength;count++)
  {
         if (sigIn[count] < *sigMin)
    *sigMin = sigIn[count];
  }
  return;
 }