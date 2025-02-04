#include <stdio.h>

#include <ctype.h>

#include <stdlib.h>

#include <stdbool.h>

# 1 
void count_types_in_hand(int hand[5][2], int* types) {

  int j, i;
  *types = 0;

  for(i = 0; i < 5; i++) {

    for (j=0; j<i; j++){
      if (hand[i][1] == hand[j][1]) break;
    }

    if (i == j) *types += 1;
  }
}