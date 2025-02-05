
# 1 
void foo(float *f) {
 __asm__ volatile (
  "flds (%0) \n"
  "fistpl (%0) \n"
  "fildl (%0) \n"
  "fstps (%0) \n"
  :
  : "r" (f)
  : "memory"
 );

 return;
}