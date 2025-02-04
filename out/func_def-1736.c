
# 1 
int add_matrices (double matrix1[4][4],double matrix2[4][4],
     double result[4][4]){
    int i,j;

    for (i=0; i<4; i++ ) {
 for (j=0; j<4; j++ ) {
     result[i][j] = matrix1[i][j] + matrix2[i][j];
 }
    }
    return 0;

}