#include <stdlib.h>

#include <math.h>

# 1 
void gfks_create_identity_matrix(float m[]) {
  int i;
  for (i = 0; i < 16; i++) {
    m[i] = 0;
  }
  for (i = 0; i < 16; i += 5) {
    m[i] = 1;
  }
}