#include <stddef.h>

# 1 
void check_size_t(size_t *x,size_t *y,char* ret) {
  *ret = ((char*)y)-((char*)x) == sizeof(*x) ? 't' : 'f';
}