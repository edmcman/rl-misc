#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
void RotMx_t_Vector(int *R_t_V, const int *RotMx, const int *Vector, int FacTr)
{
  const int *vec;


  if (FacTr > 0)
  {
                            vec = Vector;
    *R_t_V = *RotMx++ * *vec++;
    *R_t_V += *RotMx++ * *vec++;
    *R_t_V += *RotMx++ * *vec;
    *R_t_V %= FacTr; if (*R_t_V < 0) *R_t_V += FacTr;
     R_t_V++;
                            vec = Vector;
    *R_t_V = *RotMx++ * *vec++;
    *R_t_V += *RotMx++ * *vec++;
    *R_t_V += *RotMx++ * *vec;
    *R_t_V %= FacTr; if (*R_t_V < 0) *R_t_V += FacTr;
     R_t_V++;
                            vec = Vector;
    *R_t_V = *RotMx++ * *vec++;
    *R_t_V += *RotMx++ * *vec++;
    *R_t_V += *RotMx * *vec;
    *R_t_V %= FacTr; if (*R_t_V < 0) *R_t_V += FacTr;
  }
  else
  {
                            vec = Vector;
    *R_t_V = *RotMx++ * *vec++;
    *R_t_V += *RotMx++ * *vec++;
    *R_t_V++ += *RotMx++ * *vec;
                            vec = Vector;
    *R_t_V = *RotMx++ * *vec++;
    *R_t_V += *RotMx++ * *vec++;
    *R_t_V++ += *RotMx++ * *vec;
                            vec = Vector;
    *R_t_V = *RotMx++ * *vec++;
    *R_t_V += *RotMx++ * *vec++;
    *R_t_V += *RotMx * *vec;
  }
}