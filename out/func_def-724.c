#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

# 1 
size_t NA_rm_duplicate(size_t *arr, size_t len)
{
  size_t prev = 0;
  size_t curr = 1;
  size_t last = len - 1;
  while (curr <= last) {
    for (prev = 0; prev < curr && arr[curr] != arr[prev]; ++prev);
    if (prev == curr) {
      ++curr;
    } else {
      arr[curr] = arr[last];
      --last;
    }
  }
  return curr;
}