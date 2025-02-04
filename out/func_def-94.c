
# 1 
void stbi_decode_DXT45_alpha_block(
   unsigned char uncompressed[16*4],
   unsigned char compressed[8] )
{
 int i, next_bit = 8*2;
 unsigned char decode_alpha[8];

 decode_alpha[0] = compressed[0];
 decode_alpha[1] = compressed[1];
 if( decode_alpha[0] > decode_alpha[1] )
 {

  decode_alpha[2] = (6*decode_alpha[0] + 1*decode_alpha[1]) / 7;
  decode_alpha[3] = (5*decode_alpha[0] + 2*decode_alpha[1]) / 7;
  decode_alpha[4] = (4*decode_alpha[0] + 3*decode_alpha[1]) / 7;
  decode_alpha[5] = (3*decode_alpha[0] + 4*decode_alpha[1]) / 7;
  decode_alpha[6] = (2*decode_alpha[0] + 5*decode_alpha[1]) / 7;
  decode_alpha[7] = (1*decode_alpha[0] + 6*decode_alpha[1]) / 7;
 } else
 {

  decode_alpha[2] = (4*decode_alpha[0] + 1*decode_alpha[1]) / 5;
  decode_alpha[3] = (3*decode_alpha[0] + 2*decode_alpha[1]) / 5;
  decode_alpha[4] = (2*decode_alpha[0] + 3*decode_alpha[1]) / 5;
  decode_alpha[5] = (1*decode_alpha[0] + 4*decode_alpha[1]) / 5;
  decode_alpha[6] = 0;
  decode_alpha[7] = 255;
 }
 for( i = 3; i < 16*4; i += 4 )
 {
  int idx = 0, bit;
  bit = (compressed[next_bit>>3] >> (next_bit&7)) & 1;
  idx += bit << 0;
  ++next_bit;
  bit = (compressed[next_bit>>3] >> (next_bit&7)) & 1;
  idx += bit << 1;
  ++next_bit;
  bit = (compressed[next_bit>>3] >> (next_bit&7)) & 1;
  idx += bit << 2;
  ++next_bit;
  uncompressed[i] = decode_alpha[idx & 7];
 }

}