#include <stdio.h>

# 1 
void is_max(int *max, int *min) {
 if(*max > *min)
  *min = *max;
}