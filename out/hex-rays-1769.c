#include <stdio.h>

#include <stdlib.h>

#include <arpa/inet.h>

#include <netinet/in.h>

#include <netinet/ip.h>

#include <netinet/ip_icmp.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, char a2)
{
_BYTE *result; // rax

result = a1;
*a1 = a2;
return result;
}