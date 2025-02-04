#include <stdio.h>

# 1 
void copy(char to[], char from[]) {
  int counter;

  counter = 0;

  while((to[counter]=from[counter]) != '\0') {
    ++counter;
  }
}