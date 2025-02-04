
# 1 
float vec_mean(float *probvec, float *scorevec, int maxindex)
{
 int i;
 float mean;

 mean = 0.0;
 for (i = 0 ; i <= maxindex ; i++) {
  mean += (*probvec++) * (*scorevec++);
  }
 return(mean);
}