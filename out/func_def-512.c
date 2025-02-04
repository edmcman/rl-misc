#include <stdio.h>

#include <float.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

# 1 
void mcopy(double A[3][3], double B[3][3]){
    for(int i=0; i<3; ++i){
        for(int j=0; j<3; ++j){
            B[i][j] = A[i][j];
        }
    }
}