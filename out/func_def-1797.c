#include <stdio.h>

# 1 
static void
utf8_build( unsigned int value, unsigned char out[6], int in_pos, int out_pos )
{
 unsigned int in_mask, out_mask;
 int byte = 0;
 while ( in_pos < 32 ) {
  in_mask = 1 << ( 31 - in_pos );
  out_mask = 1 << ( 7 - out_pos );
  if ( value & in_mask ) out[byte] |= out_mask;
  in_pos++;
  out_pos++;
  if ( out_pos > 7 ) {
   out_pos=2;
   byte++;
  }
 }
}