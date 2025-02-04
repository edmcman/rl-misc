
# 1 
void copy_sudoku(int destination[9][9], int source[9][9]) {
    int i, j;
    for(i = 0; i < 9; ++i) {
        for(j = 0; j < 9; ++j) {
            destination[i][j] = source[i][j];
        }
    }
}