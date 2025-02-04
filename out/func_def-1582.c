
# 1 
int bitmap_alloc(unsigned int *array, int num_bits)
{
    int bitindex;
    int wordindex = 0;


    while (array[wordindex] == 0xffffffff)
    {
        if (++wordindex == num_bits / 32)
            return -1;
    }




    bitindex = __builtin_clz(~array[wordindex]);
    array[wordindex] |= 0x80000000 >> bitindex;
    return wordindex * 32 + bitindex;
}