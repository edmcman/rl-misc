
# 1 
void test9_2(volatile int* ptr, int val) {
  __sync_fetch_and_add(ptr, val);
}