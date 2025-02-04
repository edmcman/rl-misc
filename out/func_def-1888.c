#include <stdio.h>

# 1 
void g(int dw, int a[]) {
    if (dw % 2 == 0) {
        a[0] = dw / 2;
        a[1] = 16 + dw / 2;
    } else {
        a[0] = 16 + dw / 2;
        a[1] = dw / 2;
    }
}