#include <stdio.h>

# 1 
void rsync(int* i, int* j) {
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}