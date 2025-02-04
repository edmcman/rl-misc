#include <stdio.h>

#include <stdlib.h>

# 1 
void dp_sub(int *arr, int *dp, int n)
{
    for(int i = 1; i < n; i++) {
        for(int j = i - 1; j >= 0; j--) {
            if(arr[j] < arr[i] && dp[i] < dp[j] + 1)
                dp[i] = dp[j] + 1;
        }
    }
}