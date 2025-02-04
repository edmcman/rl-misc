
# 1 
unsigned int header_decode(unsigned int header, int *packetID, int *srcAddr, int *dstAddr, int *packetLength, int noc_size)
{

 int i;
 int oneCounter = 0;

 *packetID = (header & 0b0000000000000000000011111111);
 *srcAddr = (header & 0b0000000000000000111100000000) >> 24;
 *dstAddr = (header & 0b0000000000001111000000000000) >> 28;
 *packetLength = (header & 0b1111111111110000000000000000) >> 16;


 for (i = 0; i < 8; i++)
    {

  oneCounter += (*packetID & (1 << i)) != 0 ? 1 : 0;
    }

 if (oneCounter != 1){
  return 1;

 }
 else if (*srcAddr > noc_size)
 {
  return 2;

 }
 else if (*dstAddr > noc_size)
 {
  return 3;

 }
 else if (dstAddr == srcAddr)
 {
  return 4;

 }
 else if (*packetLength < 2)
 {
  return 5;

 }
 else
 {
  return 0;
 }

}