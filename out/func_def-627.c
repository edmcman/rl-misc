
# 1 
void crc32_finish(unsigned long *crc32val) {
  *crc32val ^= 0xFFFFFFFF;
}