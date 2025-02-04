










# 1 
static unsigned short
BitMaskDetails(unsigned long mask, unsigned short *left_shift, unsigned short *right_shift)
{
    unsigned short i;
    unsigned long m = mask;

    if (mask == 0) {
 *left_shift = 0;
 *right_shift = 0;
 return 0;
    }

    for (i=0; i < 32; i++) {
 if ( (((m << 1)&0xffffffff) >> 1) != m )
     break;
 else
     m <<= 1;
    }
    *left_shift = i;

    m = mask;
    for (i=0; i < 32 ; i++) {
 if ( ((m >> 1) << 1) != m )
     break;
 else
     m >>= 1;
    }
    *right_shift = i;

    return (unsigned short) m;
}