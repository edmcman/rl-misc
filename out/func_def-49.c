
# 1 
extern inline float mac(const float *a, const float *b, unsigned int size)
{
 float sum = 0;
 unsigned int i;

 for (i = 0; i < size; i++)
  sum += (*a++) * (*b++);
 return sum;
}