
# 1 
void test9_1(volatile int* ptr, int val) {
  __sync_fetch_and_add_4(ptr, val);
}