




# 1 
void
AT_getBafVersion(int *major, int *minor)
{
  *major = 0x0300 >> 8;
  *minor = 0x0300 & 0xff;
}