#include <stdlib.h>

#include <stdio.h>

#include <math.h>

#include <pthread.h>

# 1 
int upper_bound(float* a, int n, float x) {
    int l = 0;
    int h = n;
    while (l < h) {
        int mid = (l + h) / 2;
        if (x >= a[mid]) {
            l = mid + 1;
        } else {
            h = mid;
        }
    }
    return l;
}