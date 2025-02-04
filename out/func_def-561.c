#include <stdio.h>

# 1 
int give_me(char memory[1024], int helper[1024], int size) {
 int elem = 0;
 for (; elem < 1024; ++elem) {
  if(!helper[elem]) {
   helper[elem] = 1;
   return elem;
  }
 }
 return -1;
}