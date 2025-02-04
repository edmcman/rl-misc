
# 1 
int
receive_byte (unsigned char *ch)
{
  return ((read (0, ch, 1) < 1) ? -1 : 0);
}