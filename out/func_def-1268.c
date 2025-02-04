#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
void InverseRotMx(const int *RotMx, int *InvRotMx)
{
  InvRotMx[0] = RotMx[4] * RotMx[8] - RotMx[5] * RotMx[7];
  InvRotMx[1] = - RotMx[1] * RotMx[8] + RotMx[2] * RotMx[7];
  InvRotMx[2] = RotMx[1] * RotMx[5] - RotMx[2] * RotMx[4];
  InvRotMx[3] = - RotMx[3] * RotMx[8] + RotMx[5] * RotMx[6];
  InvRotMx[4] = RotMx[0] * RotMx[8] - RotMx[2] * RotMx[6];
  InvRotMx[5] = - RotMx[0] * RotMx[5] + RotMx[2] * RotMx[3];
  InvRotMx[6] = RotMx[3] * RotMx[7] - RotMx[4] * RotMx[6];
  InvRotMx[7] = - RotMx[0] * RotMx[7] + RotMx[1] * RotMx[6];
  InvRotMx[8] = RotMx[0] * RotMx[4] - RotMx[1] * RotMx[3];
}