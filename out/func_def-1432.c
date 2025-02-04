#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

#include <unistd.h>

#include <math.h>

#include <sys/time.h>

#include <getopt.h>

#include <string.h>

# 1 
void mat_vec_mul(char trans, int m, int n, float *a, int lda, float *x, int offsetx, float *y, int offsety){
    if((trans != 'n') && (trans != 't')){
        return;
    }

    int i,j, n_size, m_size;
    float sum;
    if(lda == m){
        n_size = n;
        m_size = m;
    }
    else{
        n_size = m;
        m_size = n;
    }
    if(trans=='n'){
        for(i=0; i<m_size; ++i){
            sum = 0.0f;
            for(j=0; j<n_size; ++j){
                sum += a[i*n_size + j]*x[offsetx + j];
            }
            y[i + offsety] = sum;
        }
    }
    else{
        for(i=0; i<m_size; ++i){
            sum = 0.0f;
            for(j=0; j<n_size; ++j){
                sum += a[j*n_size + i]*x[offsetx + j];
            }
            y[i + offsety] = sum;
        }
    }
}