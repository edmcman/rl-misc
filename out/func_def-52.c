
# 1 
int FNEGS(unsigned long *rd, unsigned long *rs2)
{

 rd[0] = rs2[0] ^ 0x80000000UL;
 return 1;
}