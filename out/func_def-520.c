#include <stdio.h>

# 1 
int Sequential_Search2(int *a,int n,int key) {
    int i;
    a[0]=key;
    i=n;
    while(a[i]!=key) {
        i--;
    }
    return i;
}