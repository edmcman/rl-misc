







# 1 
void skip_bits( int* bits_offset, int* total_bits, int bits )
{
 *bits_offset += bits;
 *total_bits -= bits;
}