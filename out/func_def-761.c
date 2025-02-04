
# 1 
void test9_3(volatile int* ptr, int val) {
  __sync_fetch_and_add_4(ptr, val);
  __sync_fetch_and_add(ptr, val);
  __sync_fetch_and_add(ptr, val);
  __sync_fetch_and_add_4(ptr, val);
  __sync_fetch_and_add_4(ptr, val);
}