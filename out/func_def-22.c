#include <string.h>

# 1 
void AddArray1(float * a, float * b, int len) {
 int i=0;
 while (i < len) {
  b[i] = b[i] + a[i];
  i += 1;
 }
}