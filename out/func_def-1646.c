#include <stdio.h>

# 1 
void reverse_string(char *string) {
 char *start, *end, t;
 start = string;
 while(*string++) {
  ;
 }
 end = string - 2;
 while(start < end) {
  t = *start;
  *start = *end;
  *end = t;
  start += 1;
  end -= 1;
 }
}