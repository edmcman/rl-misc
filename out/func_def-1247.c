
# 1 
int sendbyte(int port, unsigned char *data)
{


 write(port, data, 1);

 return 0;
}