#include <stdio.h>

#include <stdlib.h>

# 1 
void limit_merge_reverse(int arr[], int copy[], int low, int mid, int high, int size) {
        int i,j,k,l,s=size;
        l=mid;
        i=size-1;
        j=high;
        while((low<=l)&&(mid+1<=j)&&(s>0)) {
                if(arr[l]>=arr[j]) {
                                copy[i]=arr[l];
                                l--;
                        } else {
                                copy[i]=arr[j];
                                j--;
                        }
                i--;
                s--;
        }
        if(s!=0) {
                if(l>mid) {
                        for(k=j;k>=mid+1;k--) {
                                copy[i]=arr[k];
                                i--;
                                s--;
                                if(s>0) break;
                        }
                } else {
                        for(k=l;k>=low;k--) {
                                copy[i]=arr[k];
                                i--;
                                s--;
                                if(s>0) break;
                          }
                }
        }
}