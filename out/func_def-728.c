
# 1 
void random_init(unsigned short * rstate, long seedval)
{

  rstate[0] = 0x330e;
  rstate[1] = seedval & 0xffffl;
  rstate[2] = seedval >> 16;
}