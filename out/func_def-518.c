#include <stdio.h>

#include <stdlib.h>

#include <arpa/inet.h>

#include <netinet/in.h>

#include <netinet/ip.h>

#include <netinet/ip_icmp.h>

# 1 
void set_ip_ver(struct ip *self, int val) {
  self->ip_v = val;
}