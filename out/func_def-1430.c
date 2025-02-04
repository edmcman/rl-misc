
# 1 
short int ipv4_get_broadcast(unsigned long ip,
                             unsigned long mask,
                             unsigned long* broadcast)
{
  *broadcast = (ip & mask) | (mask ^ 0xFFFFFFFF);
  return 0;
}