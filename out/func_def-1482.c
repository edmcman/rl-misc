#include <stdio.h>

# 1 
void COMPARE(int *max_saver,int *min_saver,int length,int a[])
{
    *max_saver = *min_saver = a[0];
    for (int i = 0; i < length; i++) {
        if (a[i] <= *min_saver) {
            *min_saver = a[i];
        }
        if (a[i] >= *max_saver) {
            *max_saver = a[i];
        }
    }
}