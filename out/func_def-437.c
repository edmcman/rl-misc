#include <math.h>

# 1 
void math_matrix_identity(float *matrix){
    int i;

    for(i = 0; i < 16; i++){
        if(i % 5 == 0){
            matrix[i] = 1;

        }else{
            matrix[i] = 0;
        }
    }
}