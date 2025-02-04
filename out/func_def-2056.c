#include <math.h>

#include <stdio.h>

#include <stdlib.h>

# 1 
static void get_corners(int corners[3][8],
                        int t_mat[3][3])
{
  int i, j;


  for (i = 0; i < 3; i++) {
    corners[i][0] = 0;
  }


  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      corners[j][i+1] = t_mat[j][i];
    }
  }


  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      corners[j][i+4] = t_mat[j][(i+1) % 3] + t_mat[j][(i+2) % 3];
    }
  }


  for (i = 0; i < 3; i++) {
    corners[i][7] = t_mat[i][0] + t_mat[i][1] + t_mat[i][2];
  }
}