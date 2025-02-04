#include <stdio.h>

#include <stdlib.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <unistd.h>

#include <string.h>

# 1 
void swap(int *value1, int *value2) {
  int temp = *value1;
  *value1 = *value2;
  *value2 = temp;
}