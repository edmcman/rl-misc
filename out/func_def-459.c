
# 1 
unsigned int
and_peep2_hi (unsigned int y, unsigned int *x)
{
  *x = y & 0x7ff;
  return y;
}