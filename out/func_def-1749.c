




# 1 
int poly1305_tagcmp(const unsigned char tag1[16], const unsigned char tag2[16])
{
  unsigned int d = 0;
  d |= tag1[ 0] ^ tag2[ 0];
  d |= tag1[ 1] ^ tag2[ 1];
  d |= tag1[ 2] ^ tag2[ 2];
  d |= tag1[ 3] ^ tag2[ 3];
  d |= tag1[ 4] ^ tag2[ 4];
  d |= tag1[ 5] ^ tag2[ 5];
  d |= tag1[ 6] ^ tag2[ 6];
  d |= tag1[ 7] ^ tag2[ 7];
  d |= tag1[ 8] ^ tag2[ 8];
  d |= tag1[ 9] ^ tag2[ 9];
  d |= tag1[10] ^ tag2[10];
  d |= tag1[11] ^ tag2[11];
  d |= tag1[12] ^ tag2[12];
  d |= tag1[13] ^ tag2[13];
  d |= tag1[14] ^ tag2[14];
  d |= tag1[15] ^ tag2[15];
  return d;
}