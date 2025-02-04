
# 1 
static void mptp_randomize(unsigned short * rstate)
{
  unsigned long accu;
  unsigned short temp[2];

  accu = (0xe66d) * (unsigned long)rstate[0] +
         (0x000b);
  temp[0] = (unsigned short)accu;

  accu >>= sizeof(unsigned short) * 8;
  accu += (unsigned long)(0xe66d) * (unsigned long)rstate[1] +
          (unsigned long)(0xdeec) * (unsigned long)rstate[0];
  temp[1] = (unsigned short)accu;

  accu >>= sizeof(unsigned short) * 8;
  accu += (0xe66d) * rstate[2] +
          (0xdeec) * rstate[1] +
          (0x0005) * rstate[0];

  rstate[0] = temp[0];
  rstate[1] = temp[1];
  rstate[2] = (unsigned short)accu;
}