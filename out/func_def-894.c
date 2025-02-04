#include <regex.h>

#include <stdlib.h>

#include <string.h>

#include <ctype.h>

#include <sys/types.h>

#include <string.h>

#include <assert.h>

# 1 
static void setcc(unsigned int* x,unsigned int bit) {
  x[bit/32]|=(1<<((bit%32)-1));
}