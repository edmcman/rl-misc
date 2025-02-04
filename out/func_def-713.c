#include <assert.h>

#include <stdio.h>

#include <math.h>

#include <string.h>

#include <float.h>

#include <stdlib.h>

# 1 
static void GetEdge(int * i0_out, int * i1_out, int * edgenum_out, const int indices[], const int i0_in, const int i1_in)
{
 *edgenum_out = -1;


 if (indices[0]==i0_in || indices[0]==i1_in)
 {

  if (indices[1]==i0_in || indices[1]==i1_in)
  {
   edgenum_out[0]=0;
   i0_out[0]=indices[0];
   i1_out[0]=indices[1];
  }
  else
  {
   edgenum_out[0]=2;
   i0_out[0]=indices[2];
   i1_out[0]=indices[0];
  }
 }
 else
 {

  edgenum_out[0]=1;
  i0_out[0]=indices[1];
  i1_out[0]=indices[2];
 }
}