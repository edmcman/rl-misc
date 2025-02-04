#include <stdio.h>

#include <stdlib.h>

#include <arpa/inet.h>

#include <netinet/in.h>

#include <netinet/ip.h>

#include <netinet/ip_icmp.h>

# 1 
#include "defs.h"
__int64  func0(_BYTE *a1, char a2)
{
__int64 result; // rax

result = (16 * (a2 & 0xF)) | *a1 & 0xFu;
*a1 = (16 * (a2 & 0xF)) | *a1 & 0xF;
return result;
}