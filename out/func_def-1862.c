#include <string.h>

#include <stdlib.h>

#include <errno.h>

#include <sys/time.h>

# 1 
void seconds_to_hours(time_t t, int* sec, int* min, int* h){
  int s = (int) t;

  *h = s / 3600;
  s = s % 3600;
  *min = s / 60;
  *sec = s % 60;
}