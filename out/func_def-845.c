#include <stdlib.h>

#include <math.h>

#include <stdio.h>

#include <time.h>

# 1 
void createDimensions(int* arr, int size){
    int x, y;
    x = 1;
    while(1){
        if(x == size){
            y = 1;
            break;
        }
        y = size / x;
        if(x >= y){
            if(x * y == size){
                break;
            }
        }
        x++;
    }
    arr[0] = x;
    arr[1] = y;
}