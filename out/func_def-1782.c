









# 1 
static unsigned char checksum(unsigned char p[4]) {
  unsigned char sum;
  sum = p[0] + p[2] + p[3];
  sum |= 0x80;
  return(sum);
}