
# 1 
unsigned char CC1101TimeoutEvent(unsigned int *tick)
{
  if (*tick < 2000)
  {
    (*tick)++;
    return 0;
  }

  return 1;
}