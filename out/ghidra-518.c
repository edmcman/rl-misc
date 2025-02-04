#include <stdio.h>

#include <stdlib.h>

#include <arpa/inet.h>

#include <netinet/in.h>

#include <netinet/ip.h>

#include <netinet/ip_icmp.h>

# 1 
void func0(byte *param_1,uint param_2){*param_1 = *param_1 & 0xf | (byte)((param_2 & 0xf) << 4);return;}