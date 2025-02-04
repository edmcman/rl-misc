
# 1 
void vp8_short_inv_walsh4x4_1_simd(short *input, short *mb_dqcoeff)
{
    int i;
    int a1;

    a1 = ((input[0] + 3) >> 3);
    for(i = 0; i < 16; i++)
    {
        mb_dqcoeff[i * 16] = a1;
    }
}