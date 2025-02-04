#include <stdio.h>

#include <ctype.h>

#include <stdlib.h>

#include <stdbool.h>

# 1 
void n_of_a_kind(int num_seq[5], int n_of_kind[2], int* n_of_kind_weight) {

  int j = 0;
  *n_of_kind_weight = 0;
  int prev = num_seq[0];
  int count = 1;

  for (int i = 1; i < 5; i++)
  {
    if (num_seq[i] == prev) count++;
    else
    {
      if (count > 1) {
        n_of_kind[j++] = count;
        *n_of_kind_weight += count * prev;
      }
      prev = num_seq[i];
      count = 1;
    }
  }

  if (count > 1) {
    n_of_kind[j++] = count;
    *n_of_kind_weight += count * prev;
  }

}