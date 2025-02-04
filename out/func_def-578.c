
# 1 
void gc_main(const int *g,
             const int *e,
             int *o
            ) {
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      int temp = 0;
      for (int k = 0; k < 3; ++k) {
        temp += g[i * 3 + k] * e[k * 3 + j];
      }
      o[i * 3 + j] = temp;
    }
  }
}