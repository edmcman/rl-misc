
# 1 
int rand_r(unsigned int *seedp) {
  *seedp = (*seedp * 1103515245 + 12345)&0x7fffffff;
  return *seedp;
}