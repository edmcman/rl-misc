#include <stdio.h>

#include <stdlib.h>

#include <stdbool.h>

#include <string.h>

#include <sys/stat.h>

# 1 
static void
char_to_bin (char * bin, const char c) {
 for (int j = 0, i = 7; i >= 0; i--, j++) {
  bin[j] = ( (c & (1 << i) ) ? '1' : '0');
 }
 bin [8] = 0x00;
}