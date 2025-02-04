


















# 1 
int transport_sendPacketBuffer(int sock, unsigned char* buf, int buflen)
{
 int rc = 0;
 rc = write(sock, buf, buflen);
 return rc;
}