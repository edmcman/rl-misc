#include <stdio.h>

#include <stdlib.h>

#include <locale.h> // установка русской локали (нужна для ОС Windows)

# 1 
void rank2(int *x, int *y)
{
    int tmp;

    if (*x > *y) {
        tmp = *x;
        *x = *y;
        *y = tmp;
    }
}