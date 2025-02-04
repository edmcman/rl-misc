#include <stdio.h>

#include <stdlib.h>

#include <arpa/inet.h>

#include <netinet/in.h>

#include <netinet/ip.h>

#include <netinet/ip_icmp.h>

# 1 
void set_icmp_id(struct icmp *self, int val) {
  self->icmp_id = htons(val);
}