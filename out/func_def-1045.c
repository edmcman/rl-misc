
# 1 
short int goertzel_output_power_v0( short int * delay, short int coefficient)
{
  long product1, product2, product3;
  signed int goertzel_power;

  product1 = ( (long) delay[1] * delay[1]);

  product2 = ( ( long) delay[2] * delay[2]);

  product3 = ( ( (long) delay[1] * coefficient ) >> 14);

  product3 = ( product3 * delay[2]);

  goertzel_power = (short int) ((product1 + product2 - product3) >> 14-5 );


  delay[1] = 0;
  delay[2] = 0;

  return goertzel_power;
}