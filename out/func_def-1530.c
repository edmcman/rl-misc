





# 1 
int
net_write(const int sock, unsigned char *buffer, unsigned int buffer_length)
{
 return send(sock, buffer, buffer_length, 0);
}