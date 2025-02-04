#include <stdio.h>

#include <stdlib.h>

# 1 
void rotateMatrix(int arr[3][3]){




 int newArr[3][3];

 for(int i = 0;i<3;i++)
  for(int j = 0;j<3;j++)
   newArr[i][3 -j-1] = arr[j][i];

 for(int i = 0; i<3;i++)
  for(int j = 0; j<3;j++)
   arr[i][j] = newArr[i][j];
}