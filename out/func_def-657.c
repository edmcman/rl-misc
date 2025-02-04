#include <stdio.h>

# 1 
void is_min(int *max, int *min) {
 if(*max < *min)
  *min = *max;
}