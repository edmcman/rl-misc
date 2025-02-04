#include <stdio.h>

#include <stdlib.h>

#include <arpa/inet.h>

#include <netinet/in.h>

#include <netinet/ip.h>

#include <netinet/ip_icmp.h>

# 1 
void func0(long param_1,uint16_t param_2){uint16_t uVar1;uVar1 = htons(param_2);*(uint16_t *)(param_1 + 4) = uVar1;return;}