









# 1 
void
growl_tcp_write_raw(
    int sock,
    const unsigned char *data,
    const int data_length)
{

    send(sock, (const char *) data, data_length, 0);
}