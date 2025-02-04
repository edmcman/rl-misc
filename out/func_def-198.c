#include <poll.h>

# 1 
void gen_PDUm8(char* pdu, const char* msg)
{
    pdu[0] = '8';
    int i;
    for (i = 0; msg[i] && i < 8 ; i++) {
  pdu[i + 1] = msg[i];
    }
    for ( ; i < 9 ; i++) {
     pdu[i + 1] = 0;
    }
}