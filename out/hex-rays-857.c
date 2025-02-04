#include <stdio.h>

#include <stdlib.h>

#include <arpa/inet.h>

#include <netinet/in.h>

#include <netinet/ip.h>

#include <netinet/ip_icmp.h>

# 1 
#include "defs.h"
uint16_t  func0(__int64 a1, uint16_t a2)
{
uint16_t result; // ax

result = htons(a2);
*(_WORD *)(a1 + 4) = result;
return result;
}