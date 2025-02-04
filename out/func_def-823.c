#include <stdio.h>

# 1 
void modify(int * len) {
    for (int i = 0; i < 12; ++i)
    {
        (*len) ++;
    }
}