





# 1 
static int seek_and_read(int chan, unsigned char *buf, int offset, int nbytes)
{
  if (offset < 0) return(-1);
  lseek(chan, offset, 0);

  return(read(chan, buf, nbytes));



}