#include <stdio.h>

# 1 
int check(float *arr){
    int i, dist = arr[1] - arr[0];
    if(dist != 0){
     for(i=0;i<10 -1;i++)
         if(arr[i]+dist != arr[i+1]) return 0;
    }
    else return 0;
    return 1;
}