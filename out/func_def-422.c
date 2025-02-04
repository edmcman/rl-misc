
# 1 
static void matmul_sub(double ablock[5][5], double bblock[5][5],
         double cblock[5][5]) {
# 2849 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/sdruix/AutomaticParallelization/refs/heads/master/omp2mpiExamples/NPB/BT/bt.c"
  int j;

  for (j = 0; j < 5; j++) {
    cblock[0][j] = cblock[0][j] - ablock[0][0]*bblock[0][j]
      - ablock[0][1]*bblock[1][j]
      - ablock[0][2]*bblock[2][j]
      - ablock[0][3]*bblock[3][j]
      - ablock[0][4]*bblock[4][j];
    cblock[1][j] = cblock[1][j] - ablock[1][0]*bblock[0][j]
      - ablock[1][1]*bblock[1][j]
      - ablock[1][2]*bblock[2][j]
      - ablock[1][3]*bblock[3][j]
      - ablock[1][4]*bblock[4][j];
    cblock[2][j] = cblock[2][j] - ablock[2][0]*bblock[0][j]
      - ablock[2][1]*bblock[1][j]
      - ablock[2][2]*bblock[2][j]
      - ablock[2][3]*bblock[3][j]
      - ablock[2][4]*bblock[4][j];
    cblock[3][j] = cblock[3][j] - ablock[3][0]*bblock[0][j]
      - ablock[3][1]*bblock[1][j]
      - ablock[3][2]*bblock[2][j]
      - ablock[3][3]*bblock[3][j]
      - ablock[3][4]*bblock[4][j];
    cblock[4][j] = cblock[4][j] - ablock[4][0]*bblock[0][j]
      - ablock[4][1]*bblock[1][j]
      - ablock[4][2]*bblock[2][j]
      - ablock[4][3]*bblock[3][j]
      - ablock[4][4]*bblock[4][j];
  }
}