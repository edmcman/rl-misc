
# 1 
int FABSS(unsigned long *rd, unsigned long *rs2)
{

 rd[0] = rs2[0] & 0x7fffffffUL;
 return 1;
}