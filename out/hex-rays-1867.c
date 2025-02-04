#include <stdio.h>

#include <stdlib.h>

#include <arpa/inet.h>

#include <netinet/in.h>

#include <netinet/ip.h>

#include <netinet/ip_icmp.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, char a2)
{
__int64 result; // rax

result = a1;
*(_BYTE *)(a1 + 1) = a2;
return result;
}