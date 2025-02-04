
# 1 
short int goertzel_output_power_v1(short int * delay, short int b_RE, short int b_IM)
{
 signed int goertzel_power;
 long real;
 long imag;


 real = delay[1] + (b_RE+delay[1]>>15);
 imag = (delay[1]*b_IM)>>15;

 goertzel_power = real*real + imag*imag;




 delay[1] = 0;
 delay[2] = 0;

 return goertzel_power;
}