
# 1 
void goertzel_filter_v0 ( short int * delay, short int input, short int coefficient )
{
    long product;

    product = ( (long) delay[1] * coefficient ) >> 14;



 delay[0] = (short int)( (input >> 7) + (short int) product - delay[2] );


 delay[2] = delay[1];
 delay[1] = delay[0];
}