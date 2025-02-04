#include <stdio.h>

#include <stdlib.h>

# 1 
void fix_values(int *min, int *zero, int *max)
{
 if (*min<-90 || *min>90)
  *min = 0;
 if (*zero<*min || *zero>90)
  *zero = *min;
 if (*max<*zero || *max>90)
  *max = *zero;
}