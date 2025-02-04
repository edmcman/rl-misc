#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <ctype.h>

#include <limits.h>

# 1 
int init_gap_qual_window(int *window, char *quals, int seq_len) {

  int i;
  for (i = 0; i < 4; i++) {
    window[i] = -1;
  }


  i = 4;
  int win_edge = -1;
  int quals_added = 0;
  while (quals_added < 4) {
    win_edge++;
    if (win_edge >= seq_len) {
      win_edge = seq_len;
      window[i] = -1;
      i++;
      quals_added++;
    } else if (quals[win_edge] != ' ') {
      window[i] = quals[win_edge];
      i++;
      quals_added++;
    }
  }
  return win_edge;
}